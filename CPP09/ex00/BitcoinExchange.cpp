#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {};

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
    *this = src;
};

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &src)
{
    if (this != &src)
    {
        this-> _data = src._data;
    }
    return *this;
};

BitcoinExchange::~BitcoinExchange() {};

bool BitcoinExchange::isValidDateFormat(const std::string &date)
{
	//check if the date is in the format YYYY-MM-DD
	if (date.size() != 10)
		return false;
	for (int i = 0; i < 10; i++) {
		if (i == 4 || i == 7) {
			if (date[i] != '-')
				return false;
		} else {
		if (!std::isdigit(date[i]))
			return false;
		}
	}
	return true;
}

bool BitcoinExchange::isLeapYear(int year)
{
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool BitcoinExchange::isValidCalendarDate(const std::string &date)
{	
	if (!isValidDateFormat(date))
		return false;
	int year = stringToInt(date.substr(0, 4));
	int month = stringToInt(date.substr(5, 2));
	int day = stringToInt(date.substr(8, 2));
	if (month < 1 || month > 12)
		return false;
	int daysInMonth[] = {31, (isLeapYear(year) ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (day < 1 || day > daysInMonth[month - 1])
		return false;
	return true;
}

void BitcoinExchange::readFile(const std::string &filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string line;
	char lastChar = line[line.size() - 1];
	char firstChar = line[0];
	if (!std::getline(file, line)) // try to read the first line
	{
		std::cerr << "Error: the file is empty" << std::endl;
		return;
	}
	while (std::getline(file, line))
    {
        if (line.empty())
            continue;
        size_t header_pos = line.find("date | value");
        if (header_pos != std::string::npos)
        {
            line = line.substr(header_pos + 12); // skip the header
            continue;
        }
        size_t comment_pos = line.find('#');
        if (comment_pos != std::string::npos)
            line = line.substr(0, comment_pos); // remove comments
        while (!line.empty() && std::isspace(lastChar))
            line.erase(line.size() - 1);
        while (!line.empty() && std::isspace(firstChar))
            line.erase(line.begin());
		
		//parsing each line
		std::string date;
		float value;
		std::istringstream iss(line); //prepares the string for easy token-based parsing.
		iss >> date;
		iss.ignore(2);
		iss >> value;

		// Trim date before using it for lookup!
		date.erase(date.find_last_not_of(" \n\r\t")+1);
		date.erase(0, date.find_first_not_of(" \n\r\t"));

		_currentPrice = value;
		_date = date;
		if (date.empty()) {
			std::cerr << "Error: missing date in input line: " << line << std::endl;
			continue;
		}
		if (!isValidCalendarDate(date))
		{
			std::cerr << "Error: invalid date: " << _date << std::endl;
			continue;
		}
		if (!_currentPrice || _currentPrice < 0 || _currentPrice > 1000)
		{
			std::cerr << "Error: value is out of range: " << _currentPrice << std::endl;
			continue;
		}
		try {
			float rate = getExchangeRateForDate(date);
			float result = rate * _currentPrice;
			std::cout << std::setprecision(2); // set precision for all following floats
			std::cout << date << " => " << _currentPrice << " = " << result << std::endl;
		} catch (const std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	file.close();
};

void BitcoinExchange::loadData(const std::string &filename)
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "Error: could not open data file." << std::endl;
		return;
	}
	std::string line;
	std::getline(file, line); // skip header
	while (std::getline(file, line))
	{
		if (line.empty())
			continue;
		size_t comma = line.find(',');
		if (comma == std::string::npos)
			continue; // skip lines without a comma
		std::string date = line.substr(0, comma);
		// Trim whitespace from date
		date.erase(date.find_last_not_of(" \n\r\t")+1);
		date.erase(0, date.find_first_not_of(" \n\r\t"));
		float rate = stringToFloat(line.substr(comma + 1).c_str());
		_data[date] = rate; // store the date and rate in the map
		//std::cout << std::fixed << std::setprecision(2); // set precision for all following floats
		// std::cout << "Loaded data: " << date << " -> " << rate << std::endl;
	}
	file.close();
};

float BitcoinExchange::getExchangeRateForDate(const std::string &date) const {
	std::map<std::string, float>::const_iterator it = _data.lower_bound(date); // 1. Find the first element in _data whose key is not less than 'date'
	if (it == _data.end()) { // Date is after all entries, use the last one
		if (_data.empty())
			throw std::runtime_error("No exchange rate available for " + date);
		it--;
	} else if (it->first != date) {
		if (it == _data.begin()) // 3. If we're already at the beginning, there is no earlier date
			throw std::runtime_error("No exchange rate available for " + date);
		--it;  // 4. Otherwise, move to the previous (closest lower) date
	}
	return it->second; // 5. Return the exchange rate for the found date
};

float BitcoinExchange::stringToFloat(const std::string &str) const
{
	std::stringstream ss(str);
	float result;
	ss >> result;
	return result;
}

int BitcoinExchange::stringToInt(const std::string &str) const
{
	std::stringstream ss(str);
	int result;
	ss >> result;
	return result;
}

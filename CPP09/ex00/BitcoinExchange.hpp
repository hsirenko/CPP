#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>

class BitcoinExchange {
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &src);
        BitcoinExchange &operator=(const BitcoinExchange &src);
        ~BitcoinExchange();
    
        void readFile(const std::string &filename);
        bool isValidDateFormat(const std::string &date);
        bool isLeapYear(int year);
        bool isValidCalendarDate(const std::string &date);
        void loadData(const std::string &filename);
        float getExchangeRateForDate(const std::string &date) const;
		float stringToFloat(const std::string &str) const;
		int stringToInt(const std::string &str) const;
		std::string formatNumber(float num) const;

    private:
        std::map<std::string, float> _data;
        std::string _date;
        float _currentPrice;
};

#endif
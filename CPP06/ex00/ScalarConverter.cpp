/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:31:47 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/21 21:30:15 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){};
ScalarConverter::ScalarConverter(std::string input)
{
	this->input = input;
};
ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	*this = src;
};
ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src)
{
	if (this != &src)
		this->input = src.input;
	return (*this);
};
ScalarConverter::~ScalarConverter(){};

std::string ScalarConverter::getInput() const
{
	return (this->input);
};

// char ScalarConverter::convertToChar(std::string input)
// {
// 	char a;

// 	std::stringstream ss(input);
// 	ss >> a;
// 	if (ss.fail())
// 		std::cerr << "char impossible" << std::endl;
// 	else
// 		return (a);
// 	return (0);
// };

// char ScalarConverter::convertToChar(std::string input)
// {
// 	char value;

// 	std::stringstream ss(input);
// 	ss >> value;
// 	if (value < 32 || value > 126 || std::isnan(value) || std::isinf(value))
// 		std::cerr << "char: Non displayable" << std::endl;
// 	else
// 		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
// 	return (value);
// };

// int ScalarConverter::convertToInt(std::string input)
// {
// 	int value = 0;

// 	std::stringstream ss(input);
// 	ss >> value; 
// 	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
// 		std::cerr << "int impossible" << std::endl;
// 	else
// 		std::cout << "int: " << static_cast<int>(value) << std::endl;
// 	return (value);
// };
// float ScalarConverter::convertToFloat(std::string input)
// {
// 	float floaty = 0.0f;

// 	std::stringstream ss(input);
// 	ss >> floaty;
// 	if (std::isnan(floaty))
// 		std::cout << "float: nanf" << std::endl;
// 	else if (std::isinf(floaty))
// 		std::cout << "float: " << (floaty > 0 ? "+inf" : "-inf") << "f" << std::endl;
// 	else
// 		std::cout << "float: " << static_cast<float>(floaty) << "f" << std::endl;
// 	return (floaty);
// };
// double ScalarConverter::convertToDouble(std::string input)
// {
// 	double doubly = 0.0;

// 	std::stringstream ss(input);
// 	ss >> doubly;
	
// 	if (std::isnan(doubly))
// 		std::cout << "double: nan" << std::endl;
// 	else if (std::isinf(doubly))
// 		std::cout << "double: " << (doubly > 0 ? "+inf" : "-inf") << std::endl;
// 	else
// 		std::cout << "double: " << doubly << std::endl;
// 	return (doubly);
// };









// void ScalarConverter::convert(const std::string &input)
// {
// 	// if (input == "0" || input == "0.0" || input == "0.0f" 
// 	// 	|| input == "nan" || input == "nanf" || input == "-nan" || input == "-nanf")
// 	// {
// 	// 	std::cout << "char: Non displayable" << std::endl;
// 	// 	std::cout << "int: impossible" << std::endl;
// 	// 	std::cout << "float: nanf" << std::endl;
// 	// 	std::cout << "double: nan" << std::endl;
// 	// }

// 	double value;

// 	if (input == "-inff" || input == "+inff"
// 		|| input == "-inf" || input == "+inf" 
// 		|| input == "nan" || input == "nanf")
// 	{
// 		std::cout << "char: impossible" << std::endl;
// 		std::cout << "int: impossible" << std::endl;

// 		if (input == "nan" || input == "nanf")
// 		{
// 			std::cout << "float: nanf" << std::endl;
// 			std::cout << "double: nan" << std::endl;
// 		}
// 		else
// 		{
// 			std::cout << "float: " << input << (input.back() != 'f' ? "f" : "") << std::endl;
// 			std::cout << "double: " << input.substr(0, input.size() - (input.back() == 'f' ? 1 : 0)) << std::endl;
// 		}
// 		return ;	
// 	}
	
// 	std::stringstream ss(input);
// 	ss >> value;

// 	if (ss.fail()) // || !ss.eof())
// 	{
// 		std::cerr << "char: impossible" << std::endl;
// 		std::cerr << "int: impossible" << std::endl;
// 		std::cerr << "float: impossible" << std::endl;
// 		std::cerr << "double: impossible" << std::endl;
// 		return ;
// 	}

// 	// to Char
// 	if (value >= std::numeric_limits<char>::min() && value <= std::numeric_limits<char>::max()
// 		&& std::isprint(static_cast<char>(value)))
// 		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
// 	else if (value >= std::numeric_limits<char>::min() && value <= std::numeric_limits<char>::max())
// 		std::cerr << "char: Non displayable" << std::endl;
// 	else 
// 		std::cerr << "char: impossible" << std::endl;
		

// 	// to Int
// 	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max() || std::isnan(value))
// 		std::cerr << "int: impossible" << std::endl;
// 	else
// 		std::cout << "int: " << static_cast<int>(value) << std::endl;

// 	// to Float
// 	if (std::isnan(value))
// 		std::cout << "float: nanf" << std::endl;
// 	else if (std::isinf(value))
// 		std::cout << "float: " << (value > 0 ? "+inf" : "-inf") << "f" << std::endl;
// 	else
// 	{
// 		std::cout << "float: " << static_cast<float>(value);
// 		if (value - static_cast<int>(value) == 0)
// 			std::cout << ".0";
// 		std::cout << "f" << std::endl;
// 	}

// 	// to Double
// 	if (std::isnan(value))
// 		std::cout << "double: nan" << std::endl;
// 	else if (std::isinf(value))
// 		std::cout << "double: " << (value > 0 ? "+inf" : "-inf") << std::endl;
// 	else
// 	{
// 		std::cout << "double: " << value;
// 		if (value - static_cast<int>(value) == 0)
// 			std::cout << ".0";
// 		std::cout << std::endl;
// 	}


	

// 	// else
// 	// {
// 	// 	std::cout << convertToChar(input) << std::endl;
// 	// 	std::cout << convertToInt(input) << std::endl;
// 	// 	std::cout << convertToFloat(input) << std::endl;
// 	// 	std::cout << convertToDouble(input) << std::endl;
// 	// }
// };



//***GPT***
// void ScalarConverter::convert(const std::string &input)
// {
//     double value;
//     bool isFloat = input.back() == 'f'; // Check if the input ends with 'f' (float)

//     // Handle special cases: infinity and NaN
//     if (input == "nanf" || input == "nan" || input == "+inf" || input == "-inf" || input == "+inff" || input == "-inff")
//     {
//         std::cout << "char: impossible" << std::endl;
//         std::cout << "int: impossible" << std::endl;

//         if (input == "nanf" || input == "nan")
//         {
//             std::cout << "float: nanf" << std::endl;
//             std::cout << "double: nan" << std::endl;
//         }
//         else
//         {
//             std::cout << "float: " << input << (isFloat ? "" : "f") << std::endl;
//             std::cout << "double: " << input.substr(0, input.size() - (isFloat ? 1 : 0)) << std::endl;
//         }
//         return;
//     }

//     // Try to convert the input to a double
//     std::stringstream ss(input);
//     ss >> value;

//     // Check for conversion errors or leftover characters
//     if (ss.fail() || !ss.eof())
//     {
//         std::cout << "char: impossible" << std::endl;
//         std::cout << "int: impossible" << std::endl;
//         std::cout << "float: impossible" << std::endl;
//         std::cout << "double: impossible" << std::endl;
//         return;
//     }

//     // Handle conversion to char
//     if (value >= std::numeric_limits<char>::min() && value <= std::numeric_limits<char>::max() && std::isprint(static_cast<char>(value)))
//         std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
//     else if (value >= std::numeric_limits<char>::min() && value <= std::numeric_limits<char>::max())
//         std::cout << "char: Non displayable" << std::endl;
//     else
//         std::cout << "char: impossible" << std::endl;

//     // Handle conversion to int
//     if (value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max())
//         std::cout << "int: " << static_cast<int>(value) << std::endl;
//     else
//         std::cout << "int: impossible" << std::endl;

//     // Handle conversion to float
//     if (std::isnan(value) || std::isinf(value) || value > std::numeric_limits<float>::max() || value < -std::numeric_limits<float>::max())
//         std::cout << "float: impossible" << std::endl;
//     else
//         std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(value) << "f" << std::endl;

//     // Handle conversion to double
//     std::cout << std::fixed << std::setprecision(1) << "double: " << value << std::endl;
// };
///GPT*********


void ScalarConverter::convert(const std::string &input) {
    double value;
    bool isChar = input.length() == 1 && !std::isdigit(input[0]);

    // Handle char input
    if (isChar) {
        char c = input[0];
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
        std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
        return;
    }

    // Try to parse the input as a double
    try {
        value = std::stod(input);
    } catch (const std::exception &) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return;
    }

    // Handle char conversion
    if (value < 0 || value > 255 || std::isnan(value)) {
        std::cout << "char: impossible" << std::endl;
    } else if (!std::isprint(static_cast<char>(value))) {
        std::cout << "char: Non displayable" << std::endl;
    } else {
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    }

    // Handle int conversion
    if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max() || std::isnan(value)) {
        std::cout << "int: impossible" << std::endl;
    } else {
        std::cout << "int: " << static_cast<int>(value) << std::endl;
    }

    // Handle float conversion
    if (std::isnan(value)) {
        std::cout << "float: nanf" << std::endl;
    } else if (std::isinf(value)) {
        std::cout << "float: " << (value > 0 ? "+inff" : "-inff") << std::endl;
    } else {
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
    }

    // Handle double conversion
    if (std::isnan(value)) {
        std::cout << "double: nan" << std::endl;
    } else if (std::isinf(value)) {
        std::cout << "double: " << (value > 0 ? "+inf" : "-inf") << std::endl;
    } else {
        std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
    }
};

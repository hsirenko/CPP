/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:31:47 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/20 19:26:26 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	
};
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
ScalarConverter::~ScalarConverter()
{
	
};
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

void ScalarConverter::convert(std::string input)
{
	// if (input == "0" || input == "0.0" || input == "0.0f" 
	// 	|| input == "nan" || input == "nanf" || input == "-nan" || input == "-nanf")
	// {
	// 	std::cout << "char: Non displayable" << std::endl;
	// 	std::cout << "int: impossible" << std::endl;
	// 	std::cout << "float: nanf" << std::endl;
	// 	std::cout << "double: nan" << std::endl;
	// }

	double value;

	if (input == "-inff" || input == "+inff"
		|| input == "-inf" || input == "+inf" || input == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;

		if (input == "-inff" || input == "+inff")
		{
			std::cout << "float: " << input << std::endl;
			std::cout << "double: " << (input == "-inff" ? "-inf" : "+inf") << std::endl;
		}
		else if (input == "-inf" || input == "+inf")
		{
			std::cout << "float: " << input << "f" << std::endl;
			std::cout << "double: " << input << std::endl;
		}
		else if (input == "nan")
		{
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
		}
		return ;	
	}
	
	std::stringstream ss(input);
	ss >> value;

	if (ss.fail())
	{
		std::cerr << "char: impossible" << std::endl;
		std::cerr << "int: impossible" << std::endl;
		std::cerr << "float: impossible" << std::endl;
		std::cerr << "double: impossible" << std::endl;
		return ;
	}

	// for cases value = NaN or Inf
	if (std::isnan(value))
	{
		std::cerr << "char: impossible" << std::endl;
		std::cerr << "int: impossible" << std::endl;
		std::cerr << "float: nanf" << std::endl;
		std::cerr << "double: nan" << std::endl;
	}

	if (std::isinf(value))
	{
		std::cerr << "char: impossible" << std::endl;
		std::cerr << "int: impossible" << std::endl;
		std::cerr << "float: " << (value > 0 ? "+inf" : "-inf") << "f" << std::endl;
		std::cerr << "double: " << (value > 0 ? "+inf" : "-inf") << std::endl;
		return ;
	}

	// to Char
	if (value < 32 || value > 126 || std::isnan(value) || std::isinf(value))
		std::cerr << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	
	// to Int
	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
		std::cerr << "int impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(value) << std::endl;

	// to Float
	if (std::isnan(value))
		std::cout << "float: nanf" << std::endl;
	else if (std::isinf(value))
		std::cout << "float: " << (value > 0 ? "+inf" : "-inf") << "f" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;

	// to Double
	if (std::isnan(value))
		std::cout << "double: nan" << std::endl;
	else if (std::isinf(value))
		std::cout << "double: " << (value > 0 ? "+inf" : "-inf") << std::endl;
	else
		std::cout << "double: " << value << std::endl;


	

	// else
	// {
	// 	std::cout << convertToChar(input) << std::endl;
	// 	std::cout << convertToInt(input) << std::endl;
	// 	std::cout << convertToFloat(input) << std::endl;
	// 	std::cout << convertToDouble(input) << std::endl;
	// }
};


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:31:47 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/21 21:53:39 by helensirenk      ###   ########.fr       */
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

void ScalarConverter::convert(const std::string &input) 
{
    double value;
	bool isChar = input.length() == 1 && !std::isdigit(input[0]) 
		&& input[0] > std::numeric_limits<int>::min() && input[0] < std::numeric_limits<int>::max();

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
    try 
	{
        value = std::stod(input);
    } 
	catch (const std::exception &) 
	{
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" << std::endl;
        return;
    }

    // Handle char conversion
    if (value < 0 || value > 255 || std::isnan(value)) 
        std::cout << "char: impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(value)))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;

    // Handle int conversion
    if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max() || std::isnan(value))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(value) << std::endl;

    // Handle float conversion
    if (std::isnan(value))
        std::cout << "float: nanf" << std::endl;
    else if (std::isinf(value))
        std::cout << "float: " << (value > 0 ? "+inff" : "-inff") << std::endl;
    else
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;

    // Handle double conversion
    if (std::isnan(value))
        std::cout << "double: nan" << std::endl;
    else if (std::isinf(value))
        std::cout << "double: " << (value > 0 ? "+inf" : "-inf") << std::endl;
    else
        std::cout << "double: " << std::fixed << std::setprecision(1) << value << std::endl;
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:19:32 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/21 20:40:10 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <limits>
#include <cstdlib>
#include <iomanip>

class ScalarConverter
{
	private:
		std::string input;
		ScalarConverter();
		ScalarConverter(std::string input);
		ScalarConverter(ScalarConverter const &src);
		ScalarConverter &operator=(ScalarConverter const &src);

	public:
		~ScalarConverter();
		std::string getInput() const;
		static void convert(const std::string &input);
		//char convertToChar(std::string input);
		//int convertToInt(std::string input);
		//float convertToFloat(std::string input);
		//double convertToDouble(std::string input);
};

#endif
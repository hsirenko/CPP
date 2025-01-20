/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 13:19:32 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/20 19:25:07 by hsirenko         ###   ########.fr       */
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

class ScalarConverter
{
	private:
		std::string input;
		ScalarConverter();
	public:
		
		ScalarConverter(std::string input);
		ScalarConverter(ScalarConverter const &src);
		ScalarConverter &operator=(ScalarConverter const &src);
		virtual ~ScalarConverter();
		std::string getInput() const;
		void convert(std::string input);
		//char convertToChar(std::string input);
		//int convertToInt(std::string input);
		//float convertToFloat(std::string input);
		//double convertToDouble(std::string input);
};

#endif
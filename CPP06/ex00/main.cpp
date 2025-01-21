/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:36:25 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/21 23:00:03 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{

	if (argc == 1)
	{
		std::cout << "Error: wrong number of arguments or input is empty" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);

	return (0);
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 17:36:25 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/20 18:07:15 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "Error: wrong number of arguments" << std::endl;
	else if (!argv[1][0])
		std::cout << "Error: empty input" << std::endl;
	else
	{
		ScalarConverter s_c(argv[1]);
		s_c.convert(argv[1]);
	}
	return (0);
};
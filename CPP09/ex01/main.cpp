/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/15 15:03:18 by helensirenk       #+#    #+#             */
/*   Updated: 2025/07/15 19:39:50 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2 ) {
        std::cerr << "Please provide a single argument for RPN inside double quotes." << std::endl;
        std::cerr << "Example: ./RPN \"7 7 * 7 -\"" << std::endl;
        return 1;
    }

	std::string input = argv[1];
	
	if (!isValidRPN(input)) {
		std::cerr << "Invalid RPN expression" << std::endl;
		return 1;
	}

	try {
		int result = evaluateRPN(input);
		std::cout << result << std::endl;
	} catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 22:36:50 by helensirenk       #+#    #+#             */
/*   Updated: 2024/12/28 18:39:06 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl1.hpp"
#include <iomanip>

int main()
{
    std::string input;
    
    std::cout << "Please, enter your complaint level: debug, info, warning or error" << std::endl;
    std::getline(std::cin, input);
    

    Harl harl1;
    harl1.complain(input);
}
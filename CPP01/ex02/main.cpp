/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 14:50:22 by helensirenk       #+#    #+#             */
/*   Updated: 2024/12/20 14:59:01 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Address of the string variable: " << &str << std::endl;
    std::cout << "Memory address of stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address of stringREF: " << &stringREF << std::endl;

    std::cout << "Value of string variable: " << str << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to be stringREF: " << stringREF << std::endl;
}
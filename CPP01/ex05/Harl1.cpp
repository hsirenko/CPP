/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl1.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:30:24 by helensirenk       #+#    #+#             */
/*   Updated: 2024/12/28 16:57:08 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl1.hpp"

Harl::Harl()
{
};

Harl::~Harl()
{
};

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
};

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
        << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
                 << "years whereas you started working here since last month." << std::endl;
};

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
};

void Harl::complain(std::string level)
{
    const char* levels[] = {"debug", "info", "warning", "error"};
    void (Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    for (size_t i = 0; i < sizeof(levels) / sizeof(levels[0]); i++)
    {
        if (level == levels[i])
        {
            (this->*functions[i])();
            return ;
        }
    }
    std::cout << "Invalid complaint level" << std::endl;
}

// void (Harl::*functions[])();: This line declares an array named functions. This array holds pointers to member functions of the Harl class. Each pointer in the array is of type void (Harl::*)(), which means it can point to a member function of the Harl class that takes no arguments and returns nothing (void).
// ●
// &Harl::debug, &Harl::info: The array functions is initialized with pointers to two member functions: debug and info, both belonging to the Harl class. The ampersand (&) is used to obtain the addresses of these member functions.
// ●
// for (size_t i = 0; i < sizeof(levels) / sizeof(levels[0]); ++i): This loop iterates through the levels array.
// ●
// (this->*functions[i])();: Inside the loop, if a match is found between the input level and an element in the levels array, this line is executed. Let's break it down:
// ○
// this: This refers to the current instance of the Harl object.
// ○
// functions[i]: This retrieves the pointer to the member function at the i-th index of the functions array.
// ○
// * (Dereference operator): This operator, along with the parentheses, is used to call the function pointed to by functions[i] on the current Harl object (this).

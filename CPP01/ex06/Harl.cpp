/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:30:24 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/02 16:49:09 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
};

Harl::~Harl()
{
};

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n"
            << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
};

void Harl::info(void)
{
    std::cout << "[ INFO]\n"
        << "I cannot believe adding extra bacon costs more money. You didn’t put"
        << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};

void Harl::warning(void)
{
    std::cout << "[ WARNING ]\n"
            << "I think I deserve to have some extra bacon for free. I’ve been coming for"
                 << "years whereas you started working here since last month." << std::endl;
};

void Harl::error(void)
{
    std::cout << "[ ERROR ]\n"
        << "This is unacceptable! I want to speak to the manager now." << std::endl;
};

void Harl::complain(std::string level)
{
    const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int levelIndex = -1;

    for (size_t i = 0; i < sizeof(levels) / sizeof(levels[0]); i++)
    {
        if (level == levels[i])
        {
            levelIndex = i;
            break;
        }
    }
    switch(levelIndex)
    {
        case 0:
            debug(); //intentional [[fallthrough]] attribute allows execution to continue into the next case without a break. This ensures that all messages from the given level and above are displayed.
			// fall through
        case 1:
            info();
			// fall through
        case 2:
            warning();
			// fall through
        case 3:
            error();
            break;
        default:
            std::cout << "[Probably complaning about insignificant problems]" << std::endl;
    }
}

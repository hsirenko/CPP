/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:22:31 by helensirenk       #+#    #+#             */
/*   Updated: 2024/12/15 22:32:54 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassPhonebook.hpp"
#include "ClassContact.hpp"

int main()
{
    Phonebook phonebook;
    std::string input;
    std::cout << "Welcome to the empty Phonebook. Enter one of the three commands to manipulate the phonebook. ADD, SEARCH, EXIT" << std::endl;

    while (1)
    {
        std::getline(std::cin, input);
        if (input == "ADD")
                phonebook.add_contact();
        else if (input == "SEARCH")
            phonebook.search_contact();
        else if (input == "EXIT")
        {
            std::cout << "Goodbye! Your contacts are lost forever!" << std::endl;
            return (0);
        }
        else
            std::cout << "Invalid command. Please enter ADD, SEARCH, or EXIT" << std::endl;
    }
    return (0);
}
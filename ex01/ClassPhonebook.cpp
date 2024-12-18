/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 15:33:56 by helensirenk       #+#    #+#             */
/*   Updated: 2024/12/15 23:03:30 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include "ClassPhonebook.hpp"
#include "ClassContact.hpp"

Phonebook::Phonebook()
{
    this->index = 0;
    for (int i = 0; i < 8; i++)
    {
        contacts[i] = Contact();
    }
}

Phonebook::~Phonebook()
{

}

void Phonebook::print_contact(Contact contacts)
{
    if (contacts.get_first_name().empty())
    {
        std::cout << "Failed to fetch this contact" << std::endl;
        return;
    }
    std::cout << "First name: " << contacts.get_first_name() << std::endl;
    std::cout << "Last name : " << contacts.get_last_name() << std::endl;
    std::cout << "Nickname: " << contacts.get_nickname() << std::endl;
    std::cout << "Phone number: " << contacts.get_phone_number() << std::endl;
    std::cout << "Darkest secret: " << contacts.get_darkest_secret() << std::endl;
}

void Phonebook::add_contact()
{
    std::string str;
    str = "";
    if (this->index > 7) {
        std::cout << "Warning: this contact will overwrite contact of " << this->contacts[this->index % 8].get_first_name() << std::endl;  
    }
    this->contacts[this->index % 8] = Contact();
    while (!std::cin.eof() && str == "")
    {
        std::cout << "Enter the first name: ";
        if (std::getline(std::cin, str) && str != "")
        {
            this->contacts[this->index % 8].set_first_name(str);
            break;
        }
        if (str == "" || std::cin.fail())
        {
            std::cin.clear();
            std::cout << "Ivalid input. All the fields must be filled out!" << std::endl;
            continue;
        }
    }
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout << "Enter the last name: ";
        if (std::getline(std::cin, str) && str != "")
            this->contacts[this->index % 8].set_last_name(str);
        if (str == "")
        {
            std::cout << "All the fields must be filled out!" << std::endl;
            continue;
        }
    }
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout << "Enter your nickname: ";
        if (std::getline(std::cin, str) && str != "")
            this->contacts[this->index % 8].set_nickname(str);
        if (str == "")
        {
            std::cout << "All the fields must be filled out!" << std::endl;
            continue;
        }
    }
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout << "Enter your phone number: ";
        if (std::getline(std::cin, str) && str != "")
            this->contacts[this->index % 8].set_phone_number(str);
        if (str == "")
        {
            std::cout << "All the fields must be filled out!" << std::endl;
            continue;
        }
    }
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout << "Reveal your darkest secret: ";
        if (std::getline(std::cin, str) && str != "")
            this->contacts[this->index % 8].set_darkest_secret(str);
        if (str == "")
        {
            std::cout << "All the fields must be filled out!" << std::endl;
            continue;
        }
    }
    std::cout << "Your contact has been added \u2709" << std::endl;
    this->index++;
};

std::string Phonebook::add_spaces(int i) 
{
    std::string str;
    str = "";

    if (i < 0)
        return "";

    while (i--)
        str.append(" ");
    return (str);
};

std::string Phonebook::adjust_width(std::string str) 
{
    if (str.size() > 10)
    {
        str.resize(9);
        str.append(".");
    }
    return (str);
};

int Phonebook::search_helper(Contact contacts[8]) 
{
    char c;
    int total_contacts;
    std::string str;

    std::cout << "_____________________________________________" << std::endl;
    std::cout << "|-----Index|First Name|-Last Name|--Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
    c = '0';
    total_contacts = 0;
    while (++c <= '8')
    {
        if (contacts[c - 1 - '0'].get_first_name().size() && ++total_contacts)
        {
            str = c;
            str = adjust_width(str);
            std::cout << "|" << add_spaces(10 - str.size()) << str;
            str = adjust_width(contacts[c - 1 - '0'].get_first_name());
            std::cout << "|" << add_spaces(10 - str.size()) << str;
            str = adjust_width(contacts[c - 1 - '0'].get_last_name());
            std::cout << "|" << add_spaces(10 - str.size()) << str;
            str = adjust_width(contacts[c - 1 - '0'].get_nickname());
            std::cout << "|" << add_spaces(10 - str.size()) << str;
            std::cout << "|" << std::endl;
        }
    }
    std::cout << "_____________________________________________" << std::endl;
    return (total_contacts);
};

void Phonebook::search_contact(void)
{
    std::string str;

    if (!search_helper(this->contacts))
    {
        std::cout << "The phonebook is empty!" << std::endl;
        return ;
    }
    while (!std::cin.eof())
    {
        std::cout << "Please enter the index of your contact: ";
        if (std::getline(std::cin, str) && str != "")
        {
            if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' && \
                this->contacts[str[0] - 1 - '0'].get_first_name().size())  // get_first_name().size(): Contact at that index must exist
            break ; // valid input found -> exiting loop;
        }
        if (str != "") // if we got here and str is not empty, input was invalid
            std::cout << "Invalid index!" << std::endl;
    }
    if (!std::cin.eof())
        this->print_contact(this->contacts[str[0] - 1 - '0']);
};

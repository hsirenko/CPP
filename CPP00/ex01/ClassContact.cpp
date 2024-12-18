/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 09:36:20 by helensirenk       #+#    #+#             */
/*   Updated: 2024/12/15 22:23:38 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

Contact::Contact()
    : first_name(""), last_name(""), nickname(""), phone_number(""), darkest_secret("")
{
    
}

Contact::~Contact()
{
    
}

std::string Contact::get_first_name(void) const
{
    return (this->first_name);
}

std::string Contact::get_last_name(void) const
{
    return (this->last_name);
}

std::string Contact::get_nickname(void) const
{
    return (this->nickname);
}

std::string Contact::get_phone_number(void) const
{
    return (this->phone_number);
}

std::string Contact::get_darkest_secret(void) const
{
    return (this->darkest_secret);
}

void    Contact::set_first_name(std::string str)
{
    this->first_name = str;
}

void    Contact::set_last_name(std::string str)
{
    this->last_name = str;
}

void    Contact::set_nickname(std::string str)
{
    this->nickname = str;
}

void    Contact::set_phone_number(std::string str)
{
    this->phone_number = str;
}

void    Contact::set_darkest_secret(std::string str)
{
    this->darkest_secret = str;
}


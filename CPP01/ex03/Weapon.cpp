/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:05:45 by helensirenk       #+#    #+#             */
/*   Updated: 2024/12/20 16:35:37 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
    this->type = name;

};

Weapon::~Weapon()
{
    
};

std::string Weapon::getType(void) const
{
    return (this->type);
};

void Weapon::setType(std::string string)
{
    this->type = string;
};    
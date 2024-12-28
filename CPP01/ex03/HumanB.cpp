/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:05:38 by helensirenk       #+#    #+#             */
/*   Updated: 2024/12/20 16:57:59 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
    : name(name), weapon(NULL)
{
    
};

HumanB::~HumanB() 
{

};

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
};

void HumanB::attack() //checks if weapon is set
{
    if (this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon to attack with!" << std::endl;
};

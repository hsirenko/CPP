/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:31:04 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/09 16:58:51 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
//#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
	hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
};

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) 
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap set name constructor called" << std::endl;
};

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
    std::cout << "ScavPtrap copy constructor called" << std::endl;
    *this = src;
};

ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
    if (this != &src)
    {
        this->name = src.name;
        this->hitPoints = src.hitPoints;
        this->energyPoints = src.energyPoints;
        this->attackDamage = src.attackDamage;
    }
    std::cout << "ScavTrap assignment operator called for " << this->name << std::endl;
    return (*this);
};

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
};

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in a Gate keeper mode " << std::endl;
};

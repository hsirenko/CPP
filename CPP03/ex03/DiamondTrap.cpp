/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:38:45 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/09 16:59:38 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap default construcctor called for " << name << std::endl;
};

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
    this->name = name;
    std::cout << "DiamondTrap name constructor called" << std::endl;
};

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
    *this = src;
    std::cout << "DiamondTrap copy constructor called" << std::endl;
};

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
    this->name = src.name;
    std::cout << "DiamondTrap assignment operator called" << std::endl;
    return (*this);
};

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
};

void DiamondTrap::whoAmI()
{
    std::cout << this->name << " ClapTrap name is " << ClapTrap::name << std::endl;
};

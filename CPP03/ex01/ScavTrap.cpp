/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:31:04 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/06 16:01:59 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
//#include "ClapTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
};

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) 
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap set name constructor called" << std::endl;
};

ScavTrap::ScavTrap(ScavTrap const &src)
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

void ScavTrap::attack(const std::string &target)
{
    if (energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "ScavTrap " << this->name << " cannot attack! Not enough energy points or hit points!" << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    energyPoints -= 1;
};
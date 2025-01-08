/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:51:47 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/06 15:37:30 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap Set name constructor called" << std::endl;
};

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "ClapPtrap copy constructor called" << std::endl;
    *this = src;
};

ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
    if (this != &src)
    {
        std::cout << "ClapTrap assignment operator called" << std::endl;
        this->name = src.name;
        this->hitPoints = src.hitPoints;
        this->energyPoints = src.energyPoints;
        this->attackDamage = src.attackDamage;
    }
    return (*this);
};

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
};

void ClapTrap::attack(const std::string &target)
{
    if (energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " cannot attack! Not enough energy points or hit points!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    energyPoints -= 1;
};

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
    hitPoints -= amount;
    if (hitPoints <= 0)
        std::cout << "ClapTrap " << this->name << " is dead!" << std::endl;
};

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints <= 0 || hitPoints <= 0)
    {
        std::cout << this->name << " cannot be repaired! Not enough energy points or hit points!" << std::endl;
        return ;
    }
    std::cout << this->name << " is being repaired for " << amount << " points!" << std::endl;
    hitPoints += amount;
    energyPoints -= 1;
};
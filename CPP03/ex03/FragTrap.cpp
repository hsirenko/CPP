/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 16:06:23 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/09 16:59:30 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
	hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
};

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap set name constructor called" << std::endl;
};

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
};

FragTrap &FragTrap::operator=(FragTrap const &src)
{
    if (this != &src)
    {
        this->name = src.name;
        this->energyPoints = src.hitPoints;
        this->energyPoints = src.energyPoints;
        this->attackDamage = src.attackDamage;
    }
    std::cout << "FragTrap assignment operator called for " << this->name << std::endl;
    return (*this);
};

FragTrap::~FragTrap()
{
    std::cout << "FragTrap default destructor called" << std::endl;
};

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->name << " is asking for a high five!" << std::endl;
};

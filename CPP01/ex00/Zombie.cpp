/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:53:39 by helensirenk       #+#    #+#             */
/*   Updated: 2024/12/19 16:28:29 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name; //sets the object's name member to the value passed into the constructor.
}

Zombie::~Zombie() 
{
    std::cout << this->name << " is dead" << std::endl;
};

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; // this->name refers to the name member of the Zombie object
}


Zombie *newZombie(std::string name)
{
    return new Zombie(name); //Returns a pointer to the newly created zombie.
}

void randomChump(std::string name)
{
    Zombie stackZombie = Zombie(name);
    stackZombie.announce();
}
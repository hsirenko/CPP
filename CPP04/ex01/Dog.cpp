/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 00:31:57 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/10 17:18:44 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
	this->brain = new Brain();
};

Dog::Dog(Dog const &src) : Animal()
{
    std::cout << "Dog copy constructor called" << std::endl;
	this->brain = new Brain();
    *this = src;
};

Dog &Dog::operator=(Dog const &src)
{
    if (this != &src)
	{
		this->type = src.getType();
		for (int i = 0; i < 100; i++)
			this->brain->ideas[i] = src.brain->ideas[i];
	}
    std::cout << "Dog assignment operator called" << std::endl;
    return (*this);
};

Dog::~Dog()
{
	delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
};

void Dog::makeSound() const
{
    std::cout << "Woof woof" << std::endl;
};
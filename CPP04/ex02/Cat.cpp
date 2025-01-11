/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 00:22:39 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/10 17:19:16 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
	this->brain = new Brain();
    this->type = "Cat";
};

Cat::Cat(Cat const &src) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain();
    *this = src;
};

Cat &Cat::operator=(Cat const &src)
{
    if (this != &src)
	{
		this->type = src.getType();
		for (int i = 0; i < 100; i++)
			this->brain->ideas[i] = src.brain->ideas[i];
	}
    std::cout << "Cat assignment operator called" << std::endl;
    return (*this);
};

Cat::~Cat()
{
	delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
};

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
};
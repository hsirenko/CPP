/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 00:31:57 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/09 10:23:58 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
};

Dog::Dog(Dog const &src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
};

Dog &Dog::operator=(Dog const &src)
{
    if (this != &src)
        this->type = src.getType();
    std::cout << "Dog assignment operator called" << std::endl;
    return (*this);
};

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
};

void Dog::makeSound() const
{
    std::cout << "Woof woof" << std::endl;
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 23:59:26 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/09 10:26:15 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal default constructor called" << std::endl;
};

Animal::Animal(Animal const &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
};

Animal &Animal::operator=(Animal const &src)
{
    if (this != &src)
        this->type = src.type;
    std::cout << "Animal assignment operator called" << std::endl;
    return (*this);
};

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
};

std::string Animal::getType() const
{
    return (this->type);
};

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
};
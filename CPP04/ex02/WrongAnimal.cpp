/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 23:59:34 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/10 00:12:48 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal defualt constructor called" << std::endl;
};

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
};

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
    if (this != &src)
        this->type = src.type;
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    return (*this);
};

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
};

std::string WrongAnimal::getType() const
{
    return (this->type);
};

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
};
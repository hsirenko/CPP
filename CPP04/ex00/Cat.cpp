/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 00:22:39 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/10 16:13:13 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
};

Cat::Cat(Cat const &src) : Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
};

Cat &Cat::operator=(Cat const &src)
{
    if (this != &src)
        this->type = src.getType();
    std::cout << "Cat assignment operator called" << std::endl;
    return (*this);
};

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
};

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
};
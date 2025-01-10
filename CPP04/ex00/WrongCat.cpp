/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 00:13:12 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/10 00:16:21 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
};

WrongCat::WrongCat(WrongCat const &src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
};

WrongCat &WrongCat::operator=(WrongCat const &src)
{
    if (this != &src)
        this->type = src.getType();
    std::cout << "WrongCat assignment operator called" << std::endl;
    return (*this);
};

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
};

void WrongCat::makeSound() const
{
    std::cout << "Moooooo!" << std::endl;
}
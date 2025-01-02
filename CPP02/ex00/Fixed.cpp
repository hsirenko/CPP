/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:34:17 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/02 11:38:40 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};

//It ensures the new object (*this) gets initialized properly using the data from the object being copied (fixed1).
//The const ensures that the passed object is not modified during the copy process.
Fixed::Fixed(const Fixed &fixed1) //The & ensures the object is passed by reference, avoiding unnecessary copying.
{
    std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(fixed1.getRawBits());
};

//Overloads the = operator to handle assignments between objects of the Fixed class.
Fixed &Fixed::operator=(const Fixed &fixed2) //Returns a reference to the current object (*this) to allow chained assignments.
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(fixed2.getRawBits());
    if (this == &fixed2) //you would check for self-assignment to avoid unnecessary work
        return (*this);
    return (*this); //Returns a reference to the current object to allow chained assignments
};

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (fixedPointValue);
};

void Fixed::setRawBits(int const raw)
{
    this->fixedPointValue = raw;
};
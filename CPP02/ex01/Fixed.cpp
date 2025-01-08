/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:34:17 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/04 06:54:14 by helensirenk      ###   ########.fr       */
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
    if (this != &fixed2) // ensures the assignment operator does not unnecessarily overwrite itself, avoiding redundant calls to setRawBits. and makes compiler pring the line """" you would check for self-assignment to avoid unnecessary work
        this->setRawBits(fixed2.getRawBits());
    return (*this); //Returns a reference to the current object to allow chained assignments
};

int Fixed::getRawBits(void) const
{
    return (fixedPointValue);
};

void Fixed::setRawBits(int const raw)
{
    this->fixedPointValue = raw;
};

float Fixed::toFloat(void) const
{
    return ((float)this->fixedPointValue / (float)(1 << fractionalBits));
};

int Fixed::toInt(void) const
{
    return (this->fixedPointValue >> fractionalBits);
};

Fixed::Fixed(const int integer)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = (integer << fractionalBits); // The integer is shifted left by fractionalBits (typically 8 or 16 bits). For example, if fractionalBits = 8 and integer = 3, the calculation is: 3×2^8 =768 fixedPointValue is now 768, which corresponds to the fixed-point representation of 3.0.
};

Fixed::Fixed(const float floating)
{
    std::cout << "Float constructor called with value: " << floating << std::endl;
    this->fixedPointValue = std::roundf(floating * (1 << fractionalBits));  
};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed)
{
    stream << fixed.toFloat();
    return (stream);
}

// Return Type:

// std::ostream&: Returns a reference to the output stream so that additional chaining of output operations (e.g., std::cout << fixed1 << fixed2;) is possible.
// Parameters:

// std::ostream &stream: A reference to the output stream object (e.g., std::cout).
// const Fixed &fixed: A reference to a constant Fixed object to be outputted. The const ensures that this function does not modify the Fixed object.
// Purpose:

// This function allows a Fixed object to be inserted into an output stream, such as std::cout, by converting the fixed-point value to a human-readable floating-point representation.
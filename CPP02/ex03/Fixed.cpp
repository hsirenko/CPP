/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:34:17 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/09 13:09:48 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixedPointValue(0)
{
    //std::cout << "Default constructor called" << std::endl;
};

Fixed::~Fixed()
{
    //std::cout << "Destructor called" << std::endl;
};

//It ensures the new object (*this) gets initialized properly using the data from the object being copied (fixed1).
//The const ensures that the passed object is not modified during the copy process.
Fixed::Fixed(const Fixed &fixed1) //The & ensures the object is passed by reference, avoiding unnecessary copying.
{
    //std::cout << "Copy constructor called" << std::endl;
    this->setRawBits(fixed1.getRawBits());
};

//Overloads the = operator to handle assignments between objects of the Fixed class.
Fixed &Fixed::operator=(const Fixed &fixed2) //Returns a reference to the current object (*this) to allow chained assignments.
{
    //std::cout << "Copy assignment operator called" << std::endl;
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
    //std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = (integer << fractionalBits); // The integer is shifted left by fractionalBits (typically 8 or 16 bits). For example, if fractionalBits = 8 and integer = 3, the calculation is: 3×2^8 =768 fixedPointValue is now 768, which corresponds to the fixed-point representation of 3.0.
};

Fixed::Fixed(const float floating)
{
    //std::cout << "Float constructor called with value: " << floating << std::endl;
    this->fixedPointValue = roundf(floating * (1 << fractionalBits));  
};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed)
{
    stream << fixed.toFloat();
    return (stream);
}

Fixed Fixed::operator+(const Fixed &fixed)
{
    Fixed result;
    result.setRawBits(this->fixedPointValue + fixed.fixedPointValue);
    return (result);
};

Fixed Fixed::operator-(const Fixed &fixed)
{
    Fixed result;
    result.setRawBits(this->fixedPointValue - fixed.fixedPointValue);
    return (result);
};

Fixed Fixed::operator*(const Fixed &fixed)
{
    Fixed result(this->toFloat() * fixed.toFloat()); // These conversions are necessary because multiplication in fixed-point arithmetic involves scaling, and using floating-point values simplifies the operation.
    return (result); // The result of the multiplication (a float) is passed to Fixed constructor, which converts it into a fixed-point value and stores it in the result object.
};

Fixed Fixed::operator/(const Fixed &fixed)
{
    Fixed result(this->toFloat() / fixed.toFloat());
    return (result);
};

bool Fixed::operator>(const Fixed &fixed)
{
    if (this->fixedPointValue > fixed.fixedPointValue)
        return (true);
    return (false);
};

bool    Fixed::operator<(const Fixed &fixed)
{
    if (this->fixedPointValue < fixed.fixedPointValue)
        return (true);
    return (false);
};

bool    Fixed::operator>=(const Fixed &fixed)
{
    if (this->fixedPointValue >= fixed.fixedPointValue)
        return (true);
    return (false);
};

bool    Fixed::operator<=(const Fixed &fixed)
{
    if (this->fixedPointValue <= fixed.fixedPointValue)
            return (true);
        return (false);
};

bool    Fixed::operator==(const Fixed &fixed)
{
    if (this->fixedPointValue == fixed.fixedPointValue)
        return (true);
    return (false);
};

bool    Fixed::operator!=(const Fixed &fixed)
{
    if (this->fixedPointValue != fixed.fixedPointValue)
        return (true);
    return (false);
};

Fixed Fixed::operator++(void)
{
    ++this->fixedPointValue;
    return(*this);
};

Fixed Fixed::operator++(int)
{
    Fixed temp = *this; // create a copy of the current object
    ++this->fixedPointValue; // increment raw fixed point value
    return (temp); // return the copy (previous value)
}

Fixed Fixed::operator--(void)
{
    --this->fixedPointValue;
    return(*this);
};

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --this->fixedPointValue; 
    return (temp); 
};

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
};

Fixed	const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
};

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
};

Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}
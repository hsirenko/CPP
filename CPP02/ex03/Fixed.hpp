/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:28:55 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/04 09:57:34 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &fixed1);
        Fixed &operator=(const Fixed &fixed2);
        Fixed (const int integer);
        Fixed(const float floating);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        Fixed   operator+(const Fixed &fixed);
        Fixed   operator-(const Fixed &fixed);
        Fixed   operator*(const Fixed &fixed);
        Fixed   operator/(const Fixed &fixed);
        bool    operator>(const Fixed &fixed);
        bool    operator<(const Fixed &fixed);
        bool    operator>=(const Fixed &fixed);
        bool    operator<=(const Fixed &fixed);
        bool    operator==(const Fixed &fixed);
        bool    operator!=(const Fixed &fixed);
        Fixed   operator++(void);
        Fixed   operator++(int);
        Fixed   operator--(void);
        Fixed   operator--(int);
        
        static Fixed	&min(Fixed &a, Fixed &b);
        static Fixed	const &min(Fixed const &a, Fixed const &b); 
		static Fixed 	&max(Fixed &a, Fixed &b);
		static Fixed 	const &max(Fixed const &a, Fixed const &b);
    
    private:
        int fixedPointValue;
        static const int fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);

#endif
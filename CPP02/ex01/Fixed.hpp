/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:28:55 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/03 21:51:59 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

//typedef unit16_t fixed_point_t;

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &fixed1);
        Fixed &operator=(const Fixed &fixed2);
        Fixed (const int integer);
        Fixed(const float floating);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
    
    private:
        int fixedPointValue;
        static const int fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);

#endif
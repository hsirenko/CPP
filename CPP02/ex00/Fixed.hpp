/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:28:55 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/02 11:22:23 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &fixed1);
        Fixed &operator=(const Fixed &fixed2);
        int getRawBits(void) const;
        void setRawBits(int const raw);
    
    private:
        int fixedPointValue;
        static const int fractionalBits = 8;
};

#endif
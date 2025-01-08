/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:27:55 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/04 10:03:14 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    // Fixed a;
    // Fixed b;
    // Fixed c;

    // a = 10;
    // b = 10;
    // c = 2;
    // // Fixed const b(Fixed(5.05f) * Fixed(2));
    // if (a > b)
    //     std::cout << "a is greater than b" << std::endl;
    // else
    //     std::cout << "a is not greater than b" << std::endl;

    // if (a < b)
    //     std::cout << "a is less than b" << std::endl;
    // else
    //     std::cout << "a is not less than b" << std::endl;
    // if (a == b)
    //     std::cout << "a is equal to b" << std::endl;
    // else
    //     std::cout << "a is not equal to b" << std::endl;
    // if (a != b) 
    //     std::cout << "a is not equal to b" << std::endl;
    // else
    //     std::cout << "a is equal to b" << std::endl;
    // if (a >= b) 
    //     std::cout << "a is greater than or equal to b" << std::endl;
    // else
    //     std::cout << "a is not greater than or equal to b" << std::endl;
    // if (a <= b) 
    //     std::cout << "a is less than or equal to b" << std::endl;
    // else
    //     std::cout << "a is not less than or equal to b" << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a * b << std::endl;
    // std::cout << a / c << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << c << std::endl;

    
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    //std::cout << Fixed::max( a, b ) << std::endl;

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
    //std::cout << Fixed::min( a, b ) << std::endl;
    //std::cout << Fixed::min( a, b ) << std::endl;
    
    return (0);
}

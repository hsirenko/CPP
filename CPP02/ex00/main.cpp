/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:27:55 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/02 12:02:14 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed b( a );
    Fixed c;

    c = b;
    
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    
    return 0;
}

// The presence of the line:
// Copy assignment operator called
// depends on whether:
// Explicit Assignment (c = b;): This always triggers the copy assignment operator.
// Temporary Objects (Compiler Optimization): If the compiler avoids temporary objects via copy elision or RVO (ret val optimization), the line may not appear.
//You could disable optimizations by using specific compiler flags:
// For GCC or Clang: Use -fno-elide-constructors.

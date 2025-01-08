/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 10:27:55 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/04 12:38:17 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void ) 
{
    //Case 1
    Point A(0, 0);
    Point B(20, 0);
    Point C(10, 30);
    Point P(10, 15);
    /* Let us check whether the point P(10, 15) lies inside the triangle
      formed by A(0, 0), B(20, 0) and C(10, 30) */
    if (bsp(A, B, C, P))
        std::cout << "Inside" << std::endl;
    else
        std::cout << "Not Inside" << std::endl;
    
    //Case2
    Point D(0, 0);
    Point E(10, 30);
    Point F(20, 0);
    Point Z(30, 15);
    
    if (bsp(D, E, F, Z))
        std::cout << "Inside" << std::endl;
    else
        std::cout << "Not Inside" << std::endl;
    
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 10:48:57 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/04 12:36:19 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

float area(Fixed a_x, Fixed a_y, Fixed b_x, Fixed b_y, Fixed c_x, Fixed c_y) 
{
    float ax = a_x.toFloat(); //because I don't have ternary operator : - supported in my Fixed class
    float ay = a_y.toFloat();
    float bx = b_x.toFloat();
    float by = b_y.toFloat();
    float cx = c_x.toFloat();
    float cy = c_y.toFloat();

    float result = ax * (by - cy) + bx * (cy - ay) + cx * (ay - by);
    //std::cout << "result " << result << std::endl;
    return (result >= 0 ? result : -result) / 2.0f; // manually writing abs value
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    Fixed a_x = a.getX();
    Fixed a_y = a.getY();
    Fixed b_x = b.getX();
    Fixed b_y = b.getY();
    Fixed c_x = c.getX();
    Fixed c_y = c.getY();
    Fixed point_x = point.getX();
    Fixed point_y = point.getY();

    float ABC = area(a_x, a_y, b_x, b_y, c_x, c_y);
    //std::cout << "area of ABC " << ABC << std::endl;
    float PBC = area(point_x, point_y, b_x, b_y, c_x, c_y);
    //std::cout << "area of PBC " << PBC << std::endl;
    float PAC = area(a_x, a_y, point_x, point_y, c_x, c_y);
    //std::cout << "area of PAC " << PAC << std::endl;
    float PAB = area(a_x, a_y, b_x, b_y, point_x, point_y);
    //std::cout << "area of PAB " << PAB << std::endl;

    return (ABC == PBC + PAC + PAB);
}
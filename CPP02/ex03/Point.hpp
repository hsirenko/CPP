/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 10:23:18 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/04 12:07:11 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include <string>
#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
        Point &operator=(const Point &point2); //private since I won't use it since I have const members, so the assignment operator cannot reassign them. 
        
    public:
        Point();
        ~Point();
        Point(const float floatX, const float floatY);
        Point(const Point &point1);
        Fixed getX(void) const;
        Fixed getY(void) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
float area(Fixed a_x, Fixed a_y, Fixed b_x, Fixed b_y, Fixed c_x, Fixed c_y);

#endif
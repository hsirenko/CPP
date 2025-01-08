/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 10:25:28 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/04 12:06:10 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point() : x(0), y(0)
{
};

Point::~Point()
{};

Point::Point(const float floatX, const float floatY) : x(floatX), y(floatY) 
{
};

Fixed Point::getX(void) const 
{
    return (this->x);
};

Fixed Point::getY(void) const
{
    return (this->y);
};

Point::Point(const Point &point1) : x(point1.x), y(point1.y)
{
};

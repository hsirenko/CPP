/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 00:44:45 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/22 10:36:30 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RealType.hpp"

int main()
{
    Base *basePtr = generate();
    identify(basePtr);
    //identify(*basePtr);
    Base &baseRef = *basePtr;
    identify(baseRef);
    delete basePtr;
    return (0);
};
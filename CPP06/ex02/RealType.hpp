/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RealType.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 00:47:30 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/22 10:09:46 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REALTYPE_HPP
# define REALTYPE_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class Base
{
    public:
        virtual ~Base();
};

class A : public Base
{
    public:
        virtual ~A();
};

class B : public Base
{
    public:
        virtual ~B();
};

class C : public Base
{
    public:
        virtual ~C();
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif
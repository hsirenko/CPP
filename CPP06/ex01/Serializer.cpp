/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 00:10:10 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/22 00:24:17 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {};
Serializer::Serializer(Serializer const &src) 
{
    *this = src;
};
Serializer &Serializer::operator=(Serializer const &src)
{
    (void)src;
    return (*this);
};

Serializer::~Serializer(){};

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
};
Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 00:06:07 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/22 14:12:04 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>

typedef unsigned long uintptr_t; //// Define uintptr_t manually for C++98 compatibility

struct Data
{
    int n;
    int m;
    int k;
};

class Serializer
{
    private:
        Serializer();
        Serializer(Serializer const &src);
        Serializer &operator=(Serializer const &src);
        ~Serializer();

    public:
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 00:15:20 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/22 00:42:43 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *data;

    data = new Data;
    
    data->n = 42;
    data->m = 21;
    data->k = 84;

    uintptr_t rawData;
    Data *newData;


    uintptr_t serialized = Serializer::serialize(data);
    Data *deserialized = Serializer::deserialize(serialized);
    std::cout << "original data for n: " << data->n << std::endl;
    std::cout << "serialized data for n:  " << serialized << std::endl;
    std::cout << "deserialized data for n: " << deserialized->n << std::endl;

    std::cout << "_-----------------------------------_" << std::endl;

    std::cout << "original Data: " << data << std::endl;
    rawData = Serializer::serialize(data);
    std::cout << "Raw data: " << rawData << std::endl;
    newData = Serializer::deserialize(rawData);
    std::cout << "Deserialized data: " << newData << std::endl;

        std::cout << "_-----------------------------------_" << std::endl;

    std::cout << "original Data for m: " << data->m << std::endl;
    rawData = Serializer::serialize(data);
    std::cout << "Raw data for m: " << rawData << std::endl;
    newData = Serializer::deserialize(rawData);
    std::cout << "Deserialized data for m: " << newData->m << std::endl;

    delete data;
};
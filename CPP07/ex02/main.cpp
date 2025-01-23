/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:55:56 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/23 16:08:50 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    try
    {
        Array<int> emptyArray;
        Array<int> intArray(5);
        
        std::cout << "Empty array size: " << emptyArray.size() << std::endl;
        std::cout << "Size of int array: " << intArray.size() << std::endl;

        for (unsigned int i = 0; i < intArray.size(); i++)
            intArray[i] = i * 2;
        std::cout << "intArray elements: ";
        for (unsigned int i = 0; i < intArray.size(); i++)
            std::cout << intArray[i] << " ";
        std::cout << std::endl;

        Array<int> copiedArray(intArray);
        std::cout << "Copied array elements: ";
        for (unsigned int i = 0; i < copiedArray.size(); i++)
            std::cout << copiedArray[i] << " ";
        std::cout << std::endl;

        copiedArray[0] = 42;
        std::cout << "Copied array elements after changing first element: ";
        for (unsigned int i = 0; i < copiedArray.size(); i++)
            std::cout << copiedArray[i] << " ";
        std::cout << std::endl;

        std::cout << "Trying to access out-of-bounds element: ";
        std::cout << copiedArray[20] << std::endl;
    }
   catch (const std::exception &e)
   {
       std::cerr << "Exception: " << e.what() << std::endl;
   }
   
   return (0);
};
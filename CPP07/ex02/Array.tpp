/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 14:30:19 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/23 16:11:05 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() : array(NULL), array_size(0) {};

template <typename T>
Array<T>::Array(unsigned int n) : array_size(n)
{
    array = new T[n](); // Allocate memory for the array and default-initialize elements 
};

template <typename T>
Array<T>::Array(const Array &src) : array(NULL), array_size(0)
{
    *this = src;
};

template <typename T>
Array<T> &Array<T>::operator=(const Array &src)
{
    if (this != &src)
    {
        delete[] array;
        array_size = src.array_size; //copy size
        array = new T[array_size]; // and allocate memory
        for (unsigned int i = 0; i < array_size; i++) // copy elements 
            array[i] = src.array[i];
    }
    return (*this);
};

template <typename T>
Array<T>::~Array()
{
    delete[] array;
};

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i >= array_size)
        throw std::out_of_range("Index out of bounds");
    return (array[i]);
};

template <typename T>
const T &Array<T>::operator[](unsigned int i) const
{
    if (i >= array_size)
        throw std::out_of_range("Index out of bounds");
    return (array[i]);
};

template <typename T>
unsigned int Array<T>::size() const
{
    return (array_size);
};
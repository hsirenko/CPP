/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:56:01 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/23 15:37:51 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{
	private:
		T* array;
		unsigned int array_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array &src);
		Array &operator=(const Array &src);
		~Array();
		T &operator[](unsigned int i); // subscript operator for accessing elements
		const T &operator[](unsigned int i) const; // const subscript operator for accessing elements
		unsigned int size() const;
};

#include "Array.tpp"

#endif
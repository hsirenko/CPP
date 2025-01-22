/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:10:28 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/22 19:52:48 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T *array, int length, void (*f)(T const &array))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
};

template <typename T>
void iter(T *array, int length, void (*f)(T  &))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
};

#endif
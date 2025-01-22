/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 18:23:26 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/22 18:58:22 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

// template <class T>
// void swap(T &a, T &b)
// {
// 	T tmp = a;
// 	a = b;
// 	b = tmp;
// };

// template <class T>
// T min(T &a, T &b)
// {
// 	return (a < b ? a : b);
// };

// template <class T>
// T max(T &a, T &b)
// {
// 	return (a > b ? a : b);
// };


template <typename T>
struct Functions
{
	static void swap(T &a, T &b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	};
	static T min(T &a, T &b)
	{
		return (a < b ? a : b);
	};

	static T max(T &a, T &b)
	{
		return (a > b ? a : b);
	};
	
};


#endif
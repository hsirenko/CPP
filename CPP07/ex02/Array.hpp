/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:56:01 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/22 20:50:37 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<class T>
class Array
{
	private:
		T* array;
		unsigned int n;
	public:
		Array() : array(NULL);
		Array(unsigned int n) : n(n)
		{
			array = new T[n];
		};
		Array(const Array &sc)
		{
			*this = src;
		};
		Array &operator=(const Array &src)
		{
			if (this != &src)
			{
				delete[] array;
				this->n = src.n;
				this->array = new T[n];
				for (unsigned int i = 0; i < n; i++)
					this->array[i] = src.array[i];
			}
			return (*this);
		};
		~Array()
		{
			delete[] array;
		};
};

#endif
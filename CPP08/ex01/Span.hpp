/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:23:47 by hsirenko          #+#    #+#             */
/*   Updated: 2025/02/13 19:38:54 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

class Span
{
	private:
		unsigned int _n;
		unsigned int _size;
		std::vector<int> _numbers;

		public:
		Span();
		Span(unsigned int n);
		Span(Span const &src);
		Span &operator=(Span const &src);
		~Span();
		int addNumber(int n);
		int shortestSpan();
		int longestSpan();
		template <typename Iterator>
		void addManyNumbers(Iterator begin, Iterator end);
		void printNumbers();

		class NotEnoughNumbersException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Not enough numbers to find a span";
				}
		};
};

#endif
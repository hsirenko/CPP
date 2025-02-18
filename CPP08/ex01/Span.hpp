/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:23:47 by hsirenko          #+#    #+#             */
/*   Updated: 2025/02/14 14:14:51 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <iterator>

class Span
{
	private:
		unsigned int _size;
		std::vector<int> _numbers;

		typedef std::vector <int>::iterator It;

	public:
		Span();
		Span(unsigned int n);
		Span(Span const &src);
		Span &operator=(Span const &src);
		~Span();
		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void addRange(It begin, It end);
		void printNumbers();

		class NotEnoughNumbersException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Not enough numbers to find a span";
				}
		};

		class SpanIsFullException : public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Our Span got full 😿 ";
				}
		};
};

#endif
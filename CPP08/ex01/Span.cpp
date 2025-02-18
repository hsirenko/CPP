/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:28:04 by hsirenko          #+#    #+#             */
/*   Updated: 2025/02/14 14:17:49 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {};

Span::Span(unsigned int n) : _size(n) {};

Span::Span(Span const &src)
{
	*this = src;
};

Span &Span::operator=(Span const &src)
{
	if (this != &src)
	{
		_size = src._size;
	}
	return (*this);
};

Span::~Span() {};

void Span::addNumber(int n)
{
	if (_numbers.size() == _size)
		throw Span::SpanIsFullException();
	_numbers.push_back(n);
};

void Span::addRange(It begin, It end)
{
	size_t rangeSize = std::distance(begin, end);
	if (rangeSize + _numbers.size() > _size)
		throw Span::SpanIsFullException();
	else
		_numbers.insert(_numbers.end(), begin, end);
};

int Span::shortestSpan()
{
	if (_numbers.size() < 2)
	throw Span::NotEnoughNumbersException();

	std::vector<int> sortedNumbers = _numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());

	int minSpan = sortedNumbers[1] - sortedNumbers[0];
	for (size_t i = 0; i < sortedNumbers.size() - 1; i++)
	{
		int span = sortedNumbers[i + 1] - sortedNumbers[i];
		if (span < minSpan)
			minSpan = span;
	}
	return minSpan;
	
};
int Span::longestSpan()
{
	if (_numbers.size() < 2)
		throw Span::NotEnoughNumbersException();

	int maxVal = *std::max_element(_numbers.begin(), _numbers.end());
	int minVal = *std::min_element(_numbers.begin(), _numbers.end());
	return (maxVal - minVal);
};
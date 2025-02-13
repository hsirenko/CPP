/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:28:04 by hsirenko          #+#    #+#             */
/*   Updated: 2025/02/13 19:50:45 by hsirenko         ###   ########.fr       */
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
		_n = src._n;
		_size = src._size;
	}
	return (*this);
};
Span::~Span() {};

int Span::addNumber(int n)
{
	if (_size < _n)
	{
		_numbers.push_back(n);
		_size++;
	}
	else 
		throw std::out_of_range("Our Span got full 😿 ");
	return 0;
};
template <typename Iterator>
void Span::addManyNumbers(Iterator begin, Iterator end)
{
	size_t rangeSize = std::distance(begin, end);
	if (rangeSize + _size <= _n)
	{
		_numbers.insert(_numbers.end(), begin, end);
		_size += rangeSize;
	}
	else 
		throw std::out_of_range("Our Span got full 😿 ");
}

int Span::shortestSpan()
{
	if (_numbers.size() < 2)
	throw NotEnoughNumbersException();

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
		throw NotEnoughNumbersException();

	int maxVal = *std::max_element(_numbers.begin(), _numbers.end());
	int minVal = *std::min_element(_numbers.begin(), _numbers.end());
	return (maxVal - minVal);
};
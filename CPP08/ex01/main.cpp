/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 18:49:40 by hsirenko          #+#    #+#             */
/*   Updated: 2025/02/13 19:51:44 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void Span::printNumbers()
{
	for (std::vector<int>::size_type i = 0; i < _numbers.size(); i++)
		std::cout << _numbers[i] << " ";
	std::cout << std::endl;
}

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	int vec[] = { 1, 2, 3, 4, 5};
	std::vector<int> vect_w_many_numbers(vec, vec + sizeof(vec) / sizeof(vec[0])); 
	sp.addManyNumbers(vect_w_many_numbers.begin(), vect_w_many_numbers.end());
	sp.printNumbers();
	return 0;
}
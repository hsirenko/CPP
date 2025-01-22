/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:29:26 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/22 19:46:47 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printNumbers(int const &a)
{
	std::cout << a << std::endl;

};

void printStrings(std::string const &a)
{
	std::cout << a << std::endl;
};

int main()
{
	int arr1[] = {1, 10, 30, 42};
	std::string arr2[] = {"Hello", "world", "42", "!"};
	int length1 = sizeof(arr1) / sizeof(arr1[0]);
	int length2 = sizeof(arr2) / sizeof(arr2[0]);

	iter(arr1, length1, printNumbers);
	std::cout << "---------------------" << std::endl;
	iter(arr2, length2, printStrings);

}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:23:01 by hsirenko          #+#    #+#             */
/*   Updated: 2025/02/13 18:08:36 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int main()
{
	int vec_arr[] = {4, 24, 3, -8 , 42, 113};
	std::vector<int> vec(vec_arr, vec_arr + sizeof(vec_arr) / sizeof(vec_arr[0]));
	
	int lst_arr[] = {2, 2, 2, 5, 2};
	std::list<int> lst(lst_arr, lst_arr + sizeof(lst_arr) / sizeof(lst_arr[0]));
	try
	{
		std::vector<int>::iterator it = easyfind(vec, 42);
		std::cout << "Found " << *it << " in vector." << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	try
	{
		std::list<int>::iterator it = easyfind(lst, 42);
		std::cout << "Found " << *it << " in list." << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	
	return (0);
}
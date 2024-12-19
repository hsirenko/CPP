/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:25:58 by hsirenko          #+#    #+#             */
/*   Updated: 2024/12/19 19:07:01 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* horde = zombieHorde(5, "Helaaaaan");

	for (int i = 0; i < 5; i++)
	{
		horde[i].announce();
	}

	delete [] horde;
	return (0);
}
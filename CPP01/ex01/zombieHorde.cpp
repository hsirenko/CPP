/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:25:38 by hsirenko          #+#    #+#             */
/*   Updated: 2024/12/19 18:55:22 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	
};

Zombie::~Zombie()
{
	
};

Zombie* zombieHorde(int N, std::string name)
{
	Zombie* horde = new Zombie[N]; //allocate memory for N zombies in one block 
	if (N <= 0)
		return (NULL);
		
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name + "_" + intToStr(i + 1)); //std::to_string(i + 9)
	}
	return (horde);
}


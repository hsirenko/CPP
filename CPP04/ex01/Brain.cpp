/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:50:50 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/10 17:03:05 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
};

Brain::Brain(const Brain &src)
{
	*this = src;
	std::cout << "Brain copy constructor called" << std::endl;
};

Brain &Brain::operator=(const Brain &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = src.ideas[i];
	}
	std::cout << "Brain assignment operator called" << std::endl;
	return (*this);
};

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}
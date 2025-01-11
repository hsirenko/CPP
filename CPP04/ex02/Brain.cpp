/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 16:50:50 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/11 03:30:42 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : ideas()
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
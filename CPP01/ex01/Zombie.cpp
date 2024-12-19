/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:25:54 by hsirenko          #+#    #+#             */
/*   Updated: 2024/12/19 19:07:22 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setName(std::string zombie_name)
{
	name = zombie_name;
}
void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl; // this->name refers to the name member of the Zombie object
}

std::string intToStr(int number)
{
	std::ostringstream oss;
	oss << number;
	return (oss.str());
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:26:58 by hsirenko          #+#    #+#             */
/*   Updated: 2024/12/19 19:07:27 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void setName(std::string zombie_name);
		void announce(void);
		
	private:
		std::string name;

};

Zombie* zombieHorde( int N, std::string name );
std::string intToStr(int number);

#endif
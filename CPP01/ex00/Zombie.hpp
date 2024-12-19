/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:33:21 by helensirenk       #+#    #+#             */
/*   Updated: 2024/12/19 13:12:05 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
            std::string name;
    
    public:
        Zombie(std::string name);
        ~Zombie();
        
        void announce(void);
};

Zombie *newZombie(std::string name);
void randomChump( std::string name );

#endif
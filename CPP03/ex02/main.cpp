/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:51:55 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/08 13:25:21 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
    std::cout << "Creating FragTrap called Ragnar ..." << std::endl;
    FragTrap FragTrap1("Ragnar");

    std::cout << "\nAttacking with Ragnar" << std::endl;
    FragTrap1.attack("enemy");

    std::cout << "\nCreating another FragTrap called Rollo using copy constructor ..." << std::endl;
    FragTrap FragTrap2("Rollo");

    std::cout << "\nAttacking with Rollo!" << std::endl;
    FragTrap2.attack("Ragnar");

    FragTrap2.takeDamage(3);
    FragTrap2.beRepaired(8);

    std::cout << "\nCreating another FragTrap which is a copy of Ragnar (to demonstrate assignment operator call) ..." << std::endl;
    FragTrap assigningCopyRagnarTrap;
    assigningCopyRagnarTrap = FragTrap1;


    assigningCopyRagnarTrap.attack("Rollo");
    assigningCopyRagnarTrap.highFivesGuys();

    std::cout << "\nEnding program. Destructors will be called!" << std::endl;
}

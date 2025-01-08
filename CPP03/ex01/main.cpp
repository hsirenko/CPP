/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:51:55 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/06 16:04:17 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "Creating ScavTrap called Tommy ..." << std::endl;
    ScavTrap scavTrap("Tommy");

    std::cout << "\nAttacking with scavTrap" << std::endl;
    scavTrap.attack("enemy");

    std::cout << "\nCreating another ScavTrap called Jerry using copy constructor ..." << std::endl;
    ScavTrap newTrap("Jerry");

    std::cout << "\nAttacking with copied ScavTrap!" << std::endl;
    newTrap.attack("enemy");

    newTrap.takeDamage(3);
    newTrap.beRepaired(8);
    newTrap.guardGate();

    std::cout << "\nCreating another ScavTrap which is a copy of Tommy (to demonstrate assignment operator call) ..." << std::endl;
    ScavTrap assigningCopyTommyTrap;
    assigningCopyTommyTrap = scavTrap;


    assigningCopyTommyTrap.attack("enemy");
    assigningCopyTommyTrap.guardGate();

    std::cout << "\nEnding program. Destructors will be called!" << std::endl;
}

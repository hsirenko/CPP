/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:51:55 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/06 12:19:29 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clapTrap("Tommy");

    ClapTrap newTrap(clapTrap);

    // ClapTrap assigningNewTrap;
    // assigningNewTrap = newTrap;

    //ClapTrap assigningNewTrap("Jerry");

    //assigningNewTrap.attack("enemy");
    clapTrap.attack("enemy");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(10);
    clapTrap.attack("enemy");

//     assigningNewTrap.attack("enemy");
//     assigningNewTrap.takeDamage(5);
//     assigningNewTrap.beRepaired(10);
//     assigningNewTrap.attack("enemy");
}

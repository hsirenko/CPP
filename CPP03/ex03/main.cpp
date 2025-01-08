/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 10:51:55 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/08 16:07:20 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    std::cout << "Creating DiamondTrap called Diamond_excellent" << std::endl;
    DiamondTrap diamond("Diamond_excellent");

    diamond.whoAmI();
    diamond.highFivesGuys(); //FragTrap
    diamond.attack("enemy"); //ScavTrap

    std::cout << "\nEnding program. Destructors will be called!" << std::endl;
}

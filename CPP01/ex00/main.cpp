/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:31:52 by helensirenk       #+#    #+#             */
/*   Updated: 2024/12/19 15:57:51 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *heapZombie;
   
   
    heapZombie = newZombie("HeapZombie");
    heapZombie->announce();

    
    randomChump("StackZombie");

    delete heapZombie;

    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 23:58:41 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/10 00:27:24 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;//should not create a leak
    delete i;
    //...

    return (0);
}
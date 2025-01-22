/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 23:58:41 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/12 12:40:53 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;


    // const WrongAnimal* meta = new WrongAnimal();
   	// const WrongAnimal* i = new WrongCat();
	// // const WrongCat* i = new WrongCat();
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the WrongCat sound!
    // meta->makeSound();

    // delete meta;
    // delete i;

    return (0);
}
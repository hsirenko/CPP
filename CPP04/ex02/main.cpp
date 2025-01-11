/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 23:58:41 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/11 03:54:20 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "WrongCat.hpp"

int main()
{
    //const Animal* meta = new Animal(); <- do not uncomment. this should not work because Animal is an abstract class
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    //meta->makeSound();

   // delete meta;
    delete i;
    delete j;

	

	//const WrongAnimal* meta = new WrongAnimal(); <- do not uncomment. this should not work 
    // const WrongAnimal* i = new WrongCat();
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the WrongCat sound!
    // //meta->makeSound();

    // //delete meta;
    // delete i;






	// Animal *animal[4];

	// animal[0] = new Dog();
	// animal[1] = new Dog();
	// animal[2] = new Cat();
	// animal[3] = new Cat();

	// for (int i = 0; i < 4; i++)
	// 	delete animal[i];

	// Cat *Fiba = new Cat();
	// Cat Grogu = *Fiba;

	// Grogu.makeSound();
	// delete Fiba;
	
	return (0);
}
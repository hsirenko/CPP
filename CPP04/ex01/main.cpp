/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 23:58:41 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/10 18:00:16 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animals.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	
	// delete j;//should not create a leak
	// delete i;
	
	Animal *animal[4];

	animal[0] = new Dog();
	animal[1] = new Dog();
	animal[2] = new Cat();
	animal[3] = new Cat();

	for (int i = 0; i < 4; i++)
		delete animal[i];

	Cat *Fiba = new Cat();
	Cat Grogu = *Fiba;

	Grogu.makeSound();
	delete Fiba;
	
	return (0);
}
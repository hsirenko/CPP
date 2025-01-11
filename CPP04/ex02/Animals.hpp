/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 23:59:23 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/11 03:51:52 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_HPP
# define ANIMALS_HPP

#include <iostream>
#include <string>

#include "Brain.hpp"

class Brain; // forward declaration
//The error occurs because the compiler encounters the use of the Brain class in Animals.hpp before it has seen the definition of the Brain class. This happens because the #include "Brain.hpp" directive in Animals.hpp is not correctly resolving the definition of Brain.

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(Animal const &src);
        Animal &operator=(Animal const &src);
        virtual ~Animal();
        virtual void makeSound() const = 0; //updated. pure virtual function. forcing own implementation in derived classes
        std::string getType() const;
};

class Dog : public Animal
{
	private:
		Brain *brain;
    public:
        Dog();
        Dog(Dog const &src);
        Dog &operator=(Dog const &src);
        ~Dog();
        virtual void makeSound() const; //updated
};

class Cat : public Animal
{
	private:
		Brain *brain;
    public:
        Cat();
        Cat(Cat const &src);
        Cat &operator=(Cat const &src);
        ~Cat();
        virtual void makeSound() const; // Override makeSound() //updated
};

#endif
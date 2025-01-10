/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 23:59:23 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/10 17:37:32 by hsirenko         ###   ########.fr       */
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
        virtual void makeSound() const;
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
        void makeSound() const;
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
        void makeSound() const;
};

#endif
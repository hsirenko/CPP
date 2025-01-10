/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animals.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 23:59:23 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/09 23:56:56 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALS_HPP
# define ANIMALS_HPP

#include <iostream>
#include <string>

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
    public:
        Dog();
        Dog(Dog const &src);
        Dog &operator=(Dog const &src);
        ~Dog();
        void makeSound() const;
};

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const &src);
        Cat &operator=(Cat const &src);
        ~Cat();
        void makeSound() const;
};

#endif
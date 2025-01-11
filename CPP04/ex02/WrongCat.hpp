/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 23:59:53 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/11 03:49:00 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "Animals.hpp"
#include <iostream>
#include <string>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const &src);
        WrongAnimal &operator=(WrongAnimal const &src);
        virtual ~WrongAnimal(); // Virtual destructors are necessary when you expect polymorphic behavior
        virtual void makeSound() const = 0; //They ensure the correct destruction order: derived class destructor first, followed by the base class destructor.
        std::string getType() const;
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const &src);
        WrongCat &operator=(WrongCat const &src);
        ~WrongCat();
        virtual void makeSound() const;
};

#endif
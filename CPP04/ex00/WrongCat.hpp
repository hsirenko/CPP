/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 23:59:53 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/12 12:38:46 by hsirenko         ###   ########.fr       */
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
        void makeSound() const; //They ensure the correct destruction order: derived class destructor first, followed by the base class destructor.
        std::string getType() const;
};

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const &src);
        WrongCat &operator=(WrongCat const &src);
        ~WrongCat();
        void makeSound() const;
};

#endif
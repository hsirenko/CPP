/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 23:59:53 by helensirenk       #+#    #+#             */
/*   Updated: 2025/01/10 00:22:02 by helensirenk      ###   ########.fr       */
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
        ~WrongAnimal();
        void makeSound() const;
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
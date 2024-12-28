/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:05:47 by helensirenk       #+#    #+#             */
/*   Updated: 2024/12/20 16:35:07 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(std::string name);
        ~Weapon();
        std::string getType(void) const;
        void setType(std::string string);
};

#endif
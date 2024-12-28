/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl1.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:30:20 by helensirenk       #+#    #+#             */
/*   Updated: 2024/12/28 14:11:06 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL1_HPP
# define HARL1_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Harl
{
    public:
        Harl();
        ~Harl();
        void complain(std::string level);
    
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
};

#endif
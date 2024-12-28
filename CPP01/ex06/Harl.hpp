/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:30:20 by helensirenk       #+#    #+#             */
/*   Updated: 2024/12/28 17:16:44 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

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
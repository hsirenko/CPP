/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassPhonebook.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:44:49 by helensirenk       #+#    #+#             */
/*   Updated: 2024/12/15 22:24:07 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSPHONEBOOK_HPP
# define CLASSPHONEBOOK_HPP

#include "ClassContact.hpp"

class Phonebook
{
    private:
            Contact contacts[8];
            int     index;

    public:
            Phonebook();
            ~Phonebook();
            void add_contact();
            void search_contact();
            void print_contact(Contact contacts);
            int search_helper(Contact contacts[8]);
            std::string adjust_width(std::string str);
            std::string add_spaces(int i); 
};

#endif
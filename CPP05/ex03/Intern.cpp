/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 02:02:06 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/15 02:13:18 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << Intern created << std::endl;
};

Intern::Intern(Intern const &src)
{
	*this = src;
	std::cout << "Intern created by copy" << std::endl;
};

Intern &Intern::operator=(Intern const &src)
{
	//nothing to copy
	std::cout << "Intern copied" << std::endl;
	return (*this);
};

Intern::~Intern()
{
	std::cout << "Intern finished internship" << std::endl;
};
std::string *Intern::makeForm(std::string const &formName, std::string const &target)
{
	
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:30:26 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/13 22:16:44 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//Constructors 
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << "ShrubberyCreationForm default constructor called 🌲" << std::endl;
};
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &target) : AForm("ShrubberyCreationForm", 145, 137)
{
	*this = target;
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
};

// ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
// {
// 	*this = src;
// 	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;	
// }

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	if (this != &src)
		this->target = src.target;
	std::cout << "ShrubberyCreationForm assignment operator called" << std::endl;
	return (*this);
};

//Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
};

void ShrubberyCreationForm::execute() const
{
	std::cout << "Testing: ShrubberyCreationForm " << this->getName() << " is executed" << std::endl;
};
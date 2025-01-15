/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:30:39 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/14 23:13:30 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("")
{
	std::cout << "PresidentialPardonForm default constructor called 🏛" << std::endl;
};
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &target) : AForm("PresidentialPardonForm", 35, 5)
{
	*this = target;
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
};


PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	if (this != &src)
		this->target = src.target;
	std::cout << "PresidentialPardonForm assignment operator called" << std::endl;
	return (*this);
};

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
};

void PresidentialPardonForm::executeAction(std::string const &target) const
{
	std::cout << CYAN << target << " has been pardoned by Zaphod Beeblebrox 🏛" << RESET << std::endl;
};
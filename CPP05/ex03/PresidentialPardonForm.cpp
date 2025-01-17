/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:30:39 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/17 22:04:26 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = "";
	//std::cout << "PresidentialPardonForm default constructor called 🏛" << std::endl;
};
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 35, 5)
{
	this->target = target;
	//std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
};


PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	if (this != &src)
		this->target = src.target;
	//std::cout << "PresidentialPardonForm assignment operator called" << std::endl;
	return (*this);
};

PresidentialPardonForm::~PresidentialPardonForm()
{
	//std::cout << "PresidentialPardonForm destructor called" << std::endl;
};

void PresidentialPardonForm::executeAction(std::string const &target) const
{
	std::cout << CYAN << target << " has been pardoned by Zaphod Beeblebrox 🏛" << RESET << std::endl;
};

AForm *PresidentialPardonForm::clone(std::string target)
{
	return new PresidentialPardonForm(target);
};
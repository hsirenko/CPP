/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:30:34 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/17 22:03:06 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = "";
	//std::cout << "RobotomyRequestForm default constructor called 🤖" << std::endl;
};
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
	//std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
};
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	if (this != &src)
		this->target = src.target;
	//std::cout << "RobotomyRequestForm assignment operator called" << std::endl;
	return (*this);
};

RobotomyRequestForm::~RobotomyRequestForm()
{
	//std::cout << "RobotomyRequestForm destructor called" << std::endl;
};

void RobotomyRequestForm::executeAction(std::string const &target) const
{
	std::cout << "Drrrrrrrilling noises" << std::endl;
	std::srand(std::time(0)); // Seed random number generator
	if (std::rand() % 2 == 0)
		std::cout << BLUE << target << " has been robotomized successfully 🤖" << RESET << std::endl;
	else
		std::cout << RED << target << "'s robotomy failed " << RESET << std::endl;
};

AForm *RobotomyRequestForm::clone(std::string target)
{
	return new RobotomyRequestForm(target);
};
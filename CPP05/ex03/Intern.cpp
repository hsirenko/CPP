/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 02:02:06 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/17 22:22:55 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	// InternForms[0] = new ShrubberyCreationForm("");
	// InternForms[1] = new RobotomyRequestForm("");
	// InternForms[2] = new PresidentialPardonForm("");
	//std::cout << "Intern created" << std::endl;

	// for (int i = 0; i < 3; i++)
    //     InternForms[i] = nullptr;

	InternForms[0] = new ShrubberyCreationForm("");
	InternForms[1] = new RobotomyRequestForm("");
	InternForms[2] = new PresidentialPardonForm("");
};

Intern::Intern(Intern const &src)
{
	(void)src;
	InternForms[0] = new ShrubberyCreationForm("");
	InternForms[1] = new RobotomyRequestForm("");
	InternForms[2] = new PresidentialPardonForm("");
	// for (int i = 0; i < 3; i++)
    //     InternForms[i] = src.InternForms[i]->clone(""); // Deep copy
	
	// this->InternForms[0] = new ShrubberyCreationForm();
	// this->InternForms[1] = new RobotomyRequestForm();
	// this->InternForms[2] = new PresidentialPardonForm();
	//std::cout << "Intern created by copy" << std::endl;
};

Intern &Intern::operator=(Intern const &src)
{
	if (this != &src)
	{
		for (int i = 0; i < 3; i++)
		{
			delete InternForms[i]; // Free current pointers
			InternForms[i] = src.InternForms[i]->clone(""); // Deep copy 
		}
	}
	//std::cout << "Intern copied" << std::endl;
	//(void)src;
	// if (this == &src)
	// 	return (*this);
	return (*this);
};

Intern::~Intern()
{
	// for (int i = 0; i < 3; i++)
    //     delete InternForms[i];
	delete InternForms[0];
	delete InternForms[1];
	delete InternForms[2];
	
	//std::cout << "Intern finished internship" << std::endl;
};

const char *Intern::FormNotFound::what() const throw()
{
	return ("Intern doesn't know how to create this form.");
};

AForm *Intern::makeForm(std::string formName, std::string target)
{
	std::string myForms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	int i;
	for (i = 0; i < 3 && formName != myForms[i]; i++);
	if (i < 3)
	{
		std::cout << GREEN << "Intern creates " << myForms[i] << " targeted on " << target << RESET << std::endl;
		return (InternForms[i]->clone(target));
	}	
	else
		throw Intern::FormNotFound();
};
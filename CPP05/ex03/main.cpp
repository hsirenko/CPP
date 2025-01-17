/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 10:53:26 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/17 22:12:54 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"



int main()
{
	Intern intern;
	
	try
	{
		AForm *secretForm = intern.makeForm("shrubbery creation", "home");
		Bureaucrat Bob("Bob", 1);
		ShrubberyCreationForm shrub;

		Bob.signForm(shrub);
		shrub.executeAction("home");
		
	
		Bob.signForm(*secretForm);
		Bob.executeForm(*secretForm);

		delete secretForm;
	}

	catch(const std::exception& e)
	{
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}

	try
	{
		Intern someRandomIntern;
		AForm *rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		delete rrf;
	}
	
	catch(const std::exception& e)
	{
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}

	try
	{
		AForm *secretForm = intern.makeForm("presidential pardon", "Elon Musk");
	
		delete secretForm;
	}

	catch(const std::exception& e)
	{
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}

	try
	{
		AForm *secretForm = intern.makeForm("unkown form", "unknown guy");
	
		delete secretForm;
	}

	catch(const std::exception& e)
	{
		std::cerr << RED << "Exception: " << e.what() << RESET << std::endl;
	}
	

}
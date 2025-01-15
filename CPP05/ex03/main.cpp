/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 10:53:26 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/15 01:58:03 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat Bob("Bob", 1); // try with a too low grade , such as 144
		ShrubberyCreationForm shrub;

		Bob.signForm(shrub);
		shrub.executeAction("home");
		
		RobotomyRequestForm robot;
		Bob.signForm(robot);
		Bob.executeForm(robot);
		
		robot.executeAction("robot");
		PresidentialPardonForm president;

		Bob.signForm(president);
		president.executeAction("Elon Musk");
	}
	
	catch (AForm::GradeTooHighException & e)
	{
		std::cerr << MAGENTA << "High grade error: " << e.what() << RESET << std::endl;
	}
	catch (AForm::GradeTooLowException & e)
	{
		std::cerr << CYAN << "Low grade error: " << e.what() << RESET << std::endl;
	}

	Bureaucrat *Alice = new Bureaucrat("Alice", 144);
	AForm *b = new ShrubberyCreationForm();

	std::cout << std::endl;
	std::cout << *Alice << std::endl;
	std::cout << *b << std::endl;

	try
	{
		b->beSigned(*Alice);
		b->beSigned(*Alice);
	}
	catch (AForm::GradeTooHighException & e)
	{
		std::cerr << MAGENTA << "High grade error: " << e.what() << RESET << std::endl;
	}
	catch (AForm::GradeTooLowException & e)
	{
		std::cerr << CYAN << "Low grade error: " << e.what() << RESET << std::endl;
	}

	delete Alice;
	delete b;


	Bureaucrat *Kris_for_robot = new Bureaucrat("Kris_for_robot", 144);
	AForm *c = new RobotomyRequestForm();

	std::cout << std::endl;
	std::cout << *Kris_for_robot << std::endl;
	std::cout << *c << std::endl;

	try
	{
		c->beSigned(*Kris_for_robot);
		c->beSigned(*Kris_for_robot);
	}
	catch (AForm::GradeTooHighException & e)
	{
		std::cerr << MAGENTA << "High grade error: " << e.what() << RESET << std::endl;
	}
	catch (AForm::GradeTooLowException & e)
	{
		std::cerr << CYAN << "Low grade error: " << e.what() << RESET << std::endl;
	}

	delete Kris_for_robot;
	delete c;
	
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 10:53:26 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/13 20:51:49 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		std::cout << WHITE << "TEST 1 " << RESET << std::endl;
		std::cout << GREEN << "Constructing " << RESET << std::endl;
		Bureaucrat Bur1("Bur1", 1); 
		std::cout << Bur1 << std::endl;
		Form form1("form1", 150, 150);
		std::cout << form1 << std::endl;
		std::cout << BLUE << "Testing " << RESET << std::endl;
		//form1.beSigned(Bur1);
		Bur1.signForm(form1);
		form1.beSigned(Bur1);
		std::cout << GREEN << "Deconstructing " << RESET << std::endl;
	}
	catch (Form::GradeTooHighException & e) // check if we need this one 
	{
		std::cerr << MAGENTA << "High grade error: " << e.what() << RESET << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cerr << CYAN << "Low grade error: " << e.what() << RESET << std::endl;
	}

	std::cout << BLACK << "----------------------------------------" << RESET << std::endl;

	try
	{
		std::cout << WHITE << "TEST 2 " << RESET << std::endl;
		std::cout << GREEN << "Constructing " << RESET << std::endl;
		Bureaucrat Bur2("Bur2", 150); 
		std::cout << Bur2 << std::endl;
		Form form2("form2", 1, 1);
		std::cout << form2 << std::endl;
		std::cout << BLUE << "Testing " << RESET << std::endl;
		Bur2.signForm(form2);
		form2.beSigned(Bur2);
		std::cout << GREEN << "Deconstructing " << RESET << std::endl;
	}
	catch (Form::GradeTooHighException & e) // check if we need this one 
	{
		std::cerr << MAGENTA << "High grade error: " << e.what() << RESET << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cerr << CYAN << "Low grade error: " << e.what() << RESET << std::endl;
	}

	std::cout << BLACK << "----------------------------------------" << RESET << std::endl;

	try
	{
		std::cout << WHITE << "TEST 3 " << RESET << std::endl;
		std::cout << GREEN << "Constructing " << RESET << std::endl;
		Bureaucrat Bur3("Bur3", 145); 
		std::cout << Bur3 << std::endl;
		Form form3("form3", 145, -15);
		std::cout << form3 << std::endl;
		std::cout << BLUE << "Testing " << RESET << std::endl; // from now on, this code won't be executed since exception is caught and the block exits out immediately and destructors are called. 
		Bur3.signForm(form3);
		form3.beSigned(Bur3);
		std::cout << GREEN << "Deconstructing " << RESET << std::endl;
	}
	catch (Form::GradeTooHighException & e) // check if we need this one 
	{
		std::cerr << MAGENTA << "High grade error: " << e.what() << RESET << std::endl;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cerr << CYAN << "Low grade error: " << e.what() << RESET << std::endl;
	}
	
	return (0);
}

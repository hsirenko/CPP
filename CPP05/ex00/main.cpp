/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 10:53:26 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/12 16:11:52 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Bur1("Bur1", 2);
		std::cout << Bur1 << std::endl;
		Bur1.incrementGrade();
		std::cout << Bur1 << " after increment" << std::endl;
		//Bur1.decrementGrade();
		//std::cout << Bur1 << " after decrement" << std::endl;
		Bur1.incrementGrade();
		//std::cout << Bur2 << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << "High grade error: " << e.what() << std::endl;
	}
	
	catch(Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << "Low grade error: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Bur2("Bur2", 100);
		std::cout << Bur2 << std::endl;
	}
	
	catch(Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << "High grade error: " << e.what() << std::endl;
	}
	
	catch(Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << "Low grade error: " << e.what() << std::endl;
	}

	try
	{
		Bureaucrat Bur3("Bur3", 150);
		Bur3.decrementGrade();
		std::cout << Bur3 << std::endl;
	}
		catch(Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << "High grade error: " << e.what() << std::endl;
	}
	
	catch(Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << "Low grade error: " << e.what() << std::endl;
	}
	
	return (0);
}
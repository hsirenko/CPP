/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 10:53:26 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/12 19:27:52 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

// int main()
// {
// 	try
// 	{
// 		Bureaucrat Bur1("Bur1", 2); 
// 		std::cout << Bur1 << std::endl;
// 		Form form1("form1", 20, 20);
// 		std::cout << form1 << std::endl;
// 		form1.beSigned(Bur1);
// 		Bur1.signForm(form1.getName(), form1.getSigned());
// 		std::cout << form1 << std::endl;
// 	}
// 	catch (Form::GradeTooHighException & e) // check if we need this one 
// 	{
// 		std::cerr << "High grade error: " << e.what() << std::endl;
// 	}
// 	catch (Form::GradeTooLowException & e)
// 	{
// 		std::cerr << "Low grade error: " << e.what() << std::endl;
// 	}

// 	try
// 	{
// 		Bureaucrat Bur2("Bur2", 120); 
// 		std::cout << Bur2 << std::endl;
// 		Form form2("form2", 20, 20);
// 		std::cout << form2 << std::endl;
// 		form2.beSigned(Bur2);
// 		Bur2.signForm(form2.getName(), form2.getSigned());
// 		std::cout << form2 << std::endl;
// 	}
// 	catch (Form::GradeTooHighException & e) // check if we need this one 
// 	{
// 		std::cerr << "High grade error: " << e.what() << std::endl;
// 	}
// 	catch (Form::GradeTooLowException & e)
// 	{
// 		std::cerr << "Low grade error: " << e.what() << std::endl;
// 	}
	
// 	return (0);
// }

int main(void) 
{
    try 
    {
        Form form1("Player Contract", 150, 150);
        Bureaucrat bCrat1("Richarlison", 1);
        form1.beSigned(bCrat1);
		bCrat1.signForm(form1.getName(), form1.getSigned());
        std::cout << "Welcome to the Club" << std::endl;
        bCrat1.incrementGrade(); 
    }
    catch (std::exception &e) 
    {
        std::cout << "About to print the exception" << std::endl;
        std::cout << e.what() << std::endl;
    }
  
    std::cout  << "<<<<<<<<<<<<>>>>>>>>>>>" << std::endl;
    try 
    {
        Form form1("Drivers License", 1, 1);
        std::cout << form1;
        Bureaucrat bCrat1("Caitlyn Jenner", 150);
        form1.beSigned(bCrat1);
		bCrat1.signForm(form1.getName(), form1.getSigned());
    }
    catch (std::exception &e) 
    {
        std::cout << "About to print the exception" << std::endl;
        std::cout << e.what() << std::endl;
    }

    std::cout << "<<<<<<<<<<<<<>>>>>>>>>>>>>" << std::endl;
    Form form1;
    Form pContract("PlayerContract", 1, 1);
    Form pApplication("Passport Application", 150, 150);
    Form copyApplication(pApplication);
    
    std::cout << form1;
    form1 = pContract;
    std::cout << "Uknown Form should become a Player Contract now" << std::endl;
    std::cout << form1;
    std::cout << "<<<<<<<<<<<<<>>>>>>>>>>>>>" << std::endl;
    std::cout << copyApplication;
}
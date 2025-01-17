/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 21:30:26 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/17 22:02:07 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

//Constructors 
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = "";
	//std::cout << "ShrubberyCreationForm default constructor called 🌲" << std::endl;
};
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
	//std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = src.target;
	//std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	if (this != &src)
		this->target = src.target;
	//std::cout << "ShrubberyCreationForm assignment operator called" << std::endl;
	return (*this);
};

//Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << "ShrubberyCreationForm destructor called" << std::endl;
};

//Methods
void ShrubberyCreationForm::execute() const
{
	std::cout << "Testing: ShrubberyCreationForm " << this->getName() << " is executed" << std::endl;
};

void ShrubberyCreationForm::executeAction(std::string const &target) const
{
	std::string filename = target + "_shrubbery";
	std::ofstream outfile(filename.c_str());
	//std::ofstream outfile(target + "_shrubbery");

	if (!outfile)
	{	std::cout << "Error: cannot open file" << std::endl;
		return ;
	};

	outfile << "       ⭐️\n"
			   "       🌲\n"
               "      🌲🌲\n"
               "     🌲🌲🌲\n"
               "    🌲🌲🌲🌲\n"
               "   🌲🌲🌲🌲🌲\n"
               "      🪵🪵\n"
               "      🪵🪵\n";
	
	outfile.close();
	std::cout << MAGENTA << "File " << filename << "  has been created" << RESET << std::endl;
};

AForm *ShrubberyCreationForm::clone(std::string target) 
{
	return new ShrubberyCreationForm(target);
};
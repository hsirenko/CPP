/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: helensirenko <helensirenko@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:28:13 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/17 20:27:43 by helensirenk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

// Constructors 
AForm::AForm() : name(""), isSigned(false), gradeToSign(1), gradeToExecute(1)
{
	//std::cout << "AForm " << this->name << " was created" << std::endl;
	this->isSigned = false;
};

AForm::AForm(std::string const name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	//std::cout << "Form " << this->name << " was created" << std::endl;
};

AForm::AForm(const AForm &src) : name(src.name), isSigned(src.isSigned), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute)
{
	*this = src;
	//std::cout << "AForm " << src.getName() << " was copied into " << this->getName() << std::endl;
};

AForm &AForm::operator=(const AForm &src)
{
	if (this != &src)
		this->isSigned = src.isSigned;
	//std::cout << "AForm " << this->name << " was copied and attributes assigned" << std::endl;
	return (*this);
};

//Destructor
AForm::~AForm()
{
	//std::cout << "AFrom " << this->name << " was destroyed" << std::endl;
}

//Getters
std::string AForm::getName() const
{
	return (this->name);
};

bool AForm::getSigned() const
{
	return (this->isSigned);
};

int AForm::getGradeToSign() const
{
	return (this->gradeToSign);
};

int AForm::getGradeToExecute() const
{
	return (this->gradeToExecute);
};


//Methods
bool AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeToSign)
		throw AForm::GradeTooLowException();
	else if (this->isSigned == false)
	{
		this->isSigned = true;
		std::cout << YELLOW << bureaucrat.getName() << " signed " << this->name << RESET << std::endl;
		return (true);
	}
	else if (this->isSigned == true)
	{
		std::cout << YELLOW << "AForm is already signed" << RESET << std::endl;
		return (true);
	}
	else
	{
		this->isSigned = false;
		throw AForm::GradeTooHighException();
	}
};

void AForm::execute(Bureaucrat const &executor)
{
	if (isSigned == false)
		throw AForm::GradeTooLowException();
	if (executor.getGrade() > this->gradeToExecute)
		throw AForm::GradeTooLowException();
	else
		executeAction(name);
};

//Overload Operator for <<
std::ostream &operator<<(std::ostream &stream, AForm const &form)
{
	stream << "AForm " << form.getName() 
		<< " is signed: " << form.getSigned() 
		<< ", grade to sign: " << form.getGradeToSign() 
		<< ", grade to execute: " << form.getGradeToExecute();
	return (stream);
}

//Exceptions
const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
};

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
};
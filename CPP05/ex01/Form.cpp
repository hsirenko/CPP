/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:28:13 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/13 20:51:58 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

// Constructors 
Form::Form() : name(""), isSigned(false), gradeToSign(1), gradeToExecute(1)
{
	std::cout << "Form " << this->name << " was created" << std::endl;
	this->isSigned = false;
};

Form::Form(std::string const name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form " << this->name << " was created" << std::endl;
};

Form::Form(const Form &src) : name(src.name), isSigned(src.isSigned), gradeToSign(src.gradeToSign), gradeToExecute(src.gradeToExecute)
{
	*this = src;
	std::cout << "Form " << src.getName() << " was copied into " << this->getName() << std::endl;
};

Form &Form::operator=(const Form &src)
{
	if (this != &src)
		this->isSigned = src.isSigned;
	std::cout << "Form " << this->name << " was copied and attributes assigned" << std::endl;
	return (*this);
};

//Destructor
Form::~Form()
{
	std::cout << "From " << this->name << " was destroyed" << std::endl;
}

//Getters
std::string Form::getName() const
{
	return (this->name);
};

bool Form::getSigned() const
{
	return (this->isSigned);
};

int Form::getGradeToSign() const
{
	return (this->gradeToSign);
};

int Form::getGradeToExecute() const
{
	return (this->gradeToExecute);
};


//Methods
bool Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeToSign)
		throw Form::GradeTooLowException();
	else if (this->isSigned == false)
	{
		this->isSigned = true;
		std::cout << YELLOW << bureaucrat.getName() << " signed " << this->name << RESET << std::endl;
		return (true);
	}
	else if (this->isSigned == true)
	{
		std::cout << YELLOW << "Form is already signed" << std::endl;
		return (true);
	}
	else
	{
		this->isSigned = false;
		throw Form::GradeTooHighException();
	}
};

//Overload Operator for <<
std::ostream &operator<<(std::ostream &stream, Form const &form)
{
	stream << "Form " << form.getName() 
		<< " is signed: " << form.getSigned() 
		<< ", grade to sign: " << form.getGradeToSign() 
		<< ", grade to execute: " << form.getGradeToExecute();
	return (stream);
}

//Exceptions
const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
};

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
};
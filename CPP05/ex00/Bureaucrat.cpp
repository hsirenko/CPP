/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 10:53:30 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/12 15:26:17 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(1)
{
	std::cout << "Bureaucrat " << this->name << " was creatd" << std::endl;
};

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name), grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
	std::cout << "Bureaucrat " << this->name << " set name, grade custom constructor called" << std::endl;
};

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
	std::cout << "Bureaucrat " << this->name << "was copied" << std::endl;
	*this = src;
};

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &src)
{
	std::cout << "Bureaucrat " << this->name << " was copied and all attributes assigned" << std::endl;
	if (src.grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (src.grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = src.grade;
	return (*this);
};

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat " << this->name << " was destroyed" << std::endl;
};

std::string Bureaucrat::getName() const
{
	return (this->name);
};

int Bureaucrat::getGrade() const
{
	return (this->grade);
};

void Bureaucrat::incrementGrade()
{
	this->grade--;
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
};

void Bureaucrat::decrementGrade()
{
	this->grade++;
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
};

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
};
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &bureaucrat)
{
	stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (stream);
};

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsirenko <hsirenko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:27:23 by hsirenko          #+#    #+#             */
/*   Updated: 2025/01/12 19:18:40 by hsirenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <stdexcept>

class Form
{
	private:
		std::string const name;
		bool isSigned;
		int const gradeToSign;
		int const gradeToExecute;
	public:
		Form();
		Form(std::string const name, int gradeToSign, int gradeToExecute);
		Form(Form const &src);
		Form &operator=(Form const &src);
		~Form();
		std::string getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		bool beSigned(Bureaucrat &bureaucrat);
	
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};

	class GradeTooLowException : public std::exception{
		public:
			const char *what() const throw();
	};
};

std::ostream & operator << (std::ostream &stream, Form const &form);

#endif
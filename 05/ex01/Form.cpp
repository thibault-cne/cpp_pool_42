/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:56:34 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/08 20:05:50 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _grade(L)
{
	return ;
}

Form::Form(std::string name, int sGrade, int eGrade) : _name(name)
{
	if (sDrade > L || eGrade > L)
		throw Form::GradeTooLowException();
	if (sGrade < H || eGrade < H)
		throw Form::GradeTooHighException();
	this->_signGrade = sGrade;
	this->_execGrade = eGrade;
	return ;
}

Form::Form(const Form &src)
{
	*this = src;
	return ;
}

Form::~Form()
{
	return ;
}

Form &Form::operator=(const Form &src)
{
	this->_signed = src._signed;
	return (*this);
}

int	Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

int	Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

bool	getSigned(void) const
{
	return (this->_signed);
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException");
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

std::ostream	&operator<<(std::ostream &os, const Form &src)
{
	if (src.getSigned())
		os << src.getName() << " form is signed";
	else
		os << src.getName() << " form is not signed";
	return (os);
}

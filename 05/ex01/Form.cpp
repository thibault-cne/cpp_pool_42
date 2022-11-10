/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:56:34 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/10 16:50:39 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/* Constructors Destructors */

Form::Form() : _name("Default"), _signGrade(L), _execGrade(L)
{
	this->_signed = false;
	return ;
}

Form::Form(std::string name, int sGrade, int eGrade) : _name(name), _signGrade(sGrade), _execGrade(eGrade)
{
	this->_signed = false;
	if (sGrade > L || eGrade > L)
		throw Form::GradeTooLowException();
	if (sGrade < H || eGrade < H)
		throw Form::GradeTooHighException();
	return ;
}

Form::Form(const Form &src) : _signGrade(src._signGrade), _execGrade(src._execGrade)
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

/* ********** */

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

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

/* ************* */

void	Form::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	this->_signed = true;
	return ;
}

/* ************* */

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException");
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

/* *********** */

std::ostream	&operator<<(std::ostream &os, const Form &src)
{
	if (src.getSigned())
		os << src.getName() << " form is signed, needs grade " << src.getSignGrade() ;
	else
		os << src.getName() << " form is not signed, needs grade " << src.getSignGrade();
	return (os);
}

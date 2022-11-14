/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:56:34 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/11 15:07:19 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/* Constructors Destructors */

AForm::AForm() : _name("Default"), _signGrade(L), _execGrade(L)
{
	this->_signed = false;
	return ;
}

AForm::AForm(std::string name, int sGrade, int eGrade) : _name(name), _signGrade(sGrade), _execGrade(eGrade)
{
	this->_signed = false;
	if (sGrade > L || eGrade > L)
		throw AForm::GradeTooLowException();
	if (sGrade < H || eGrade < H)
		throw AForm::GradeTooHighException();
	return ;
}

AForm::AForm(const AForm &src) : _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	*this = src;
	return ;
}

AForm::~AForm()
{
	return ;
}

AForm &AForm::operator=(const AForm &src)
{
	this->_signed = src._signed;
	return (*this);
}

/* ********** */

int	AForm::getSignGrade(void) const
{
	return (this->_signGrade);
}

int	AForm::getExecGrade(void) const
{
	return (this->_execGrade);
}

std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

void	AForm::setSigned(bool i)
{
	this->_signed = i;
	return ;
}

/* ************* */

void	AForm::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() > this->_signGrade)
		throw AForm::GradeTooLowException();
	this->_signed = true;
	return ;
}

/* ************* */

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException");
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

const char	*AForm::NotSignedException::what() const throw()
{
	return ("FormNotSignedException");
}

/* *********** */

std::ostream	&operator<<(std::ostream &os, const AForm &src)
{
	if (src.getSigned())
		os << src.getName() << " Form is signed, needs grade " << src.getSignGrade() ;
	else
		os << src.getName() << " Form is not signed, needs grade " << src.getSignGrade();
	return (os);
}

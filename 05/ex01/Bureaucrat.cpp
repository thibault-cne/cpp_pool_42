/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:56:34 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/08 18:25:34 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(L)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > L)
		throw Bureaucrat::GradeTooLowException();
	if (grade < H)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	this->_grade = src._grade;
	return (*this);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

void	Bureaucrat::incGrade(void)
{
	if (this->_grade - 1 < H)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
	return ;
}

void	Bureaucrat::decGrade(void)
{
	if (this->_grade + 1 > L)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
	return ;
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException");
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &src)
{
	os << src.getName() << " is grade " << src.getGrade();
	return (os);
}

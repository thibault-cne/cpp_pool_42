/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:27:51 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/11 15:26:55 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <random>

#define	RRF RobotomyRequestForm
#define EX 45
#define SI 75

/* Constructors */

RRF::RRF() : AForm("RobotomyRequestForm", SI, EX)
{
	this->_target = "Default";
	this->setSigned(false);
	return ;
}


RRF::RRF(std::string target) : AForm("RobotomyRequestForm", SI, EX)
{
	this->_target = target;
	this->setSigned(false);
	return ;
}

RRF::RRF(const RRF &src) : AForm(src)
{
	*this = src;
	return ;
}

RRF::~RRF()
{
	return ;
}

RRF	&RRF::operator=(const RRF &src)
{
	this->setSigned(src.getSigned());
	return (*this);
}

/* ************** */

void	RRF::execute(const Bureaucrat &executor)
{
	if (executor.getGrade() > EX)
		throw AForm::GradeTooLowException();
	if(!this->getSigned())
		throw AForm::NotSignedException();
	std::srand(std::time(NULL));
	int	rVar = std::rand() + RAND_MAX + 1;

	std::cout << rVar << std::endl;
	return ;
}

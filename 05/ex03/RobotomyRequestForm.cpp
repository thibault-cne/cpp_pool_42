/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:27:51 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/14 12:25:26 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>
#include <time.h>

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

void	RRF::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > EX)
		throw AForm::GradeTooLowException();
	if(!this->getSigned())
		throw AForm::NotSignedException();
	srand(time(NULL));
	int	rVar = rand() % 2 + 1;

	if (rVar == 1)
	{
		std::cout << "Brrrrr Brrrrrrr Brrrrrrrrrrrrrrrr" << std::endl;
		std::cout << this->_target << " has been robotomised" << std::endl;
	}
	else
	{
		std::cout << "Brrrrrrrrrr Brrrrr Brrr..." << std::endl;
		std::cout << "couldn't robotomised " << this->_target << std::endl;
	}
	return ;
}

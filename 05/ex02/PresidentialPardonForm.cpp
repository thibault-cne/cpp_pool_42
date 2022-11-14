/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:27:51 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/14 11:40:43 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

#define	PPF PresidentialPardonForm
#define EX 5
#define SI 25

/* Constructors */

PPF::PPF() : AForm("PresidentialPardonForm", SI, EX)
{
	this->_target = "Default";
	this->setSigned(false);
	return ;
}


PPF::PPF(std::string target) : AForm("PresidentialPardonForm", SI, EX)
{
	this->_target = target;
	this->setSigned(false);
	return ;
}

PPF::PPF(const PPF &src) : AForm(src)
{
	*this = src;
	return ;
}

PPF::~PPF()
{
	return ;
}

PPF	&PPF::operator=(const PPF &src)
{
	this->setSigned(src.getSigned());
	return (*this);
}

/* ************** */

void	PPF::execute(const Bureaucrat &executor)
{
	if (executor.getGrade() > EX)
		throw AForm::GradeTooLowException();
	if(!this->getSigned())
		throw AForm::NotSignedException();
	std::cout << this->_target << " was forgiven by Zaphod Beeblebrox" << std::endl;
	return ;
}

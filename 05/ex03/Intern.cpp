/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:01:49 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/14 13:39:18 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &src) { *this = src; }

Intern::~Intern() {}

Intern	&Intern::operator=(const Intern &src)
{ 
	(void)src;
	return (*this);
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	std::string	names[] = {"RobotomyRequestForm", "PresidentialPardonForm", "ShrubberyCreationForm"};
	int	i = -1;
	AForm	*(Intern::*_func[3])(std::string);

	_func[0] = &Intern::rrf;
	_func[1] = &Intern::scf;
	_func[2] = &Intern::ppf;

	while (++i < 3)
	{
		if (name.compare(names[i]) == 0)
			break ;
	}
	if (i != 3)
		return ((this->*_func[i])(target));
	std::cout << "Error:Invalid form name" << std::endl;
	return (NULL);
}

AForm	*Intern::rrf(std::string target)
{
	RobotomyRequestForm b(target), *a;

	a = &b;
	return (a);
}

AForm	*Intern::scf(std::string target)
{
	ShrubberyCreationForm b(target), *a;

	a = &b;
	return (a);
}

AForm	*Intern::ppf(std::string target)
{
	PresidentialPardonForm b(target), *a;

	a = &b;
	return (a);
}

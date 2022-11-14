/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:56:08 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/14 12:02:55 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int	main(void)
{
	ShrubberyCreationForm	a("Target");
	Bureaucrat b("A", 150);

	try {
		b.signForm(a);
		std::cout << a << std::endl;
		a.execute(b);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	RobotomyRequestForm	e("TOto");

	try {
		b.signForm(e);
		e.execute(b);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	PresidentialPardonForm	f("Titi");
	Bureaucrat g("G", 6);

	try {
		g.signForm(f);
		std::cout << f << std::endl;
		f.execute(g);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		f.execute(b);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}

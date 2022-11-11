/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:56:08 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/11 16:34:00 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

int	main(void)
{
	ShrubberyCreationForm	a("Target");
	Bureaucrat b("A", 1);

	try {
		a.beSigned(b);
		std::cout << a << std::endl;
		a.execute(b);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	RobotomyRequestForm	e("TOto");

	try {
		e.beSigned(b);
		e.execute(b);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:56:08 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/11 15:07:04 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int	main(void)
{
	ShrubberyCreationForm	a("b21", "U");
	Bureaucrat b("A", 100);

	try {
	//	a.beSigned(b);
		std::cout << a << std::endl;
		a.execute(b);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	/*catch (AForm::GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
	catch (AForm::NotSignedException &e) {
		std::cout << e.what() << std::endl;
	}*/
	
	return (0);
}

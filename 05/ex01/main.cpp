/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:56:08 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/14 12:05:25 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Form a("B21", 70, 700);
		std::cout << a << std::endl;
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Form a("B21", 70, 70);
		Form aa("B22", 30, 30);
		std::cout << a << std::endl;
		std::cout << aa << std::endl;
		Bureaucrat b("Toto", 55);
		std::cout << b << std::endl;
		b.signForm(a);
		std::cout << a << std::endl;
		b.signForm(aa);
		std::cout << aa << std::endl;

	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}

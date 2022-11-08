/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:56:08 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/08 18:23:54 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	/* invalid bureacrat */
	try
	{
		Bureaucrat a("Toto", 0);
		std::cout << a << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Bureaucrat: Grade too hight" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat: Grade too low" << std::endl;
	}
	/* valid bureacrat */
	try
	{
		Bureaucrat b("Tata", 1);
		std::cout << b << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Bureaucrat: Grade too hight" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat: Grade too low" << std::endl;
	}
	/* try increment */
	try
	{
		Bureaucrat b("Tata", 1);
		b.incGrade();
		std::cout << b << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Bureaucrat: Grade too hight" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat: Grade too low" << std::endl;
	}
	/* try decrement */
	try
	{
		Bureaucrat b("Tata", 1);
		b.decGrade();
		std::cout << b << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Bureaucrat: Grade too hight" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Bureaucrat: Grade too low" << std::endl;
	}
	return (0);
}

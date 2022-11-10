/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:55:12 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/10 16:14:40 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:

	Form();
	Form(std::string name, int sGrade, int eGrade);
	Form(const Form &src);
	~Form();

	Form	&operator=(const Form &src);

	std::string	getName(void) const;
	int	getSignGrade(void) const;
	int	getExecGrade(void) const;
	bool	getSigned(void) const;

	void	beSigned(const Bureaucrat &src);

	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};

	private:

	const std::string	_name;
	const int		_signGrade;
	const int		_execGrade;
	bool			_signed;
};

std::ostream	&operator<<(std::ostream &os, const Form &src);


#endif

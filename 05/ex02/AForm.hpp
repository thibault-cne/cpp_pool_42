/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:55:12 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/11 12:37:32 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public:

	AForm();
	AForm(std::string name, int sGrade, int eGrade);
	AForm(const AForm &src);
	virtual ~AForm();

	AForm	&operator=(const AForm &src);

	std::string	getName(void) const;
	int	getSignGrade(void) const;
	int	getExecGrade(void) const;
	bool	getSigned(void) const;

	void	setSigned(bool i);

	void	beSigned(const Bureaucrat &src);
	virtual void	execute(const Bureaucrat &executor) = 0;

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

std::ostream	&operator<<(std::ostream &os, const AForm &src);


#endif

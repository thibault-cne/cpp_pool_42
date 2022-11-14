/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:38:24 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/14 13:24:18 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class Intern
{
	public:
		
		Intern();
		Intern(const Intern &src);
		~Intern();
		Intern	&operator=(const Intern &src);

		AForm	*makeForm(std::string name, std::string target);

		AForm	*scf(std::string target);
		AForm	*rrf(std::string target);
		AForm	*ppf(std::string target);
		
	private:

};

#endif

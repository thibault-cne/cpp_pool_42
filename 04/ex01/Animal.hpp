/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:28:37 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/07 14:11:07 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal &src);
		Animal	&operator=(const Animal &src);
		virtual ~Animal();

		std::string	getType(void) const;
		void		setType(std::string type);
		virtual void		makeSound(void) const ;

	private:
		std::string	_type;
};

#endif

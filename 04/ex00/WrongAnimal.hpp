/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:28:37 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/07 12:25:16 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal	&operator=(const WrongAnimal &src);
		~WrongAnimal();

		std::string	getType(void) const;
		void		setType(std::string type);
		void		makeSound(void) const ;

	private:
		std::string	_type;
};

#endif

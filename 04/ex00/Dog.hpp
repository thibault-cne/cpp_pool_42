/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:53:43 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/03 19:08:49 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:

		Dog();
		Dog(const Dog &src);
		Dog	&operator=(const Dog &src);
		~Dog();

		void	makeSound(void);
	private:
};

#endif

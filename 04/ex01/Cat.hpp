/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 18:53:43 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/07 14:53:13 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:

		Cat();
		Cat(const Cat &src);
		Cat	&operator=(const Cat &src);
		virtual ~Cat();

		virtual void	makeSound(void) const;
	private:
		Brain	*brain;
};

#endif

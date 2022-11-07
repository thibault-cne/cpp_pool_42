/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:40:12 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/07 14:20:59 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	public:
		Brain();
		Brain(const Brain &src);
		~Brain();
		Brain	&operator=(const Brain &src);

		std::string	*getIdeas(void) const;
		void	setOneIdea(int id, std::string idea);
	private:
		std::string	_ideas[100];
};

#endif

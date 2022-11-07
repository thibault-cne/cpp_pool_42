/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:50:23 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/07 14:22:26 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return ;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain	&Brain::operator=(const Brain &src)
{
	int	i = -1;

	while (++i < 100)
		this->_ideas[i] = src._ideas[i];
	return (*this);
}

std::string	*Brain::getIdeas(void) const
{
	return ((std::string *)this->_ideas);
}

void	Brain::setOneIdea(int id, std::string idea)
{
	if (id >= 0 && id < 100)
		this->_ideas[id] = idea;
	return ;
}

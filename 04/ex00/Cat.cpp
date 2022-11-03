/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:04:02 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/03 19:15:16 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor called" << std::endl;
	this->setType("Cat");
	return ;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy Constructor called" << std::endl;

	return ;
}

Cat::~Cat()
{
	return ;
}

Cat	&Cat::operator=(const Cat &src)
{
	return (*this);
}

void	Cat::makeSound(void)
{
	std::cout << "Meow Meow!" << std::endl;
	return ;
}

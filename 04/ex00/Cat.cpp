/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:04:02 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/07 12:15:10 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat Constructor called" << std::endl;
	this->setType("Cat");
	return ;
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy Constructor called" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &src)
{
	this->setType(src.getType());
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow Meow!" << std::endl;
	return ;
}

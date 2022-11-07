/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:04:02 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/07 12:07:22 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor called" << std::endl;
	this->setType("Dog");
	return ;
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy Constructor called" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog &src)
{
	this->setType(src.getType());
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouf Wouf!" << std::endl;
	return ;
}

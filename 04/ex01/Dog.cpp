/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:04:02 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/07 18:31:29 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor called" << std::endl;
	this->setType("Dog");
	this->brain = new Brain();
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
	delete this->brain;
	return ;
}

Dog	&Dog::operator=(const Dog &src)
{
	this->setType(src.getType());
	this->brain = new Brain(*src.brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouf Wouf!" << std::endl;
	return ;
}

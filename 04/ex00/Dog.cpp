/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:04:02 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/03 19:13:53 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Constructor called" << std::endl;
	this->setType("Dog");
	return ;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy Constructor called" << std::endl;

	return ;
}

Dog::~Dog()
{
	return ;
}

Dog	&Dog::operator=(const Dog &src)
{
	return (*this);
}

void	Dog::makeSound(void)
{
	std::cout << "Wouf Wouf!" << std::endl;
	return ;
}

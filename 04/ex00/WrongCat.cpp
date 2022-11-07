/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 19:04:02 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/07 12:31:04 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Constructor called" << std::endl;
	this->setType("WrongCat");
	return ;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy Constructor called" << std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	this->setType(src.getType());
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Wrong Meow Meow!" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:00:20 by lguillau          #+#    #+#             */
/*   Updated: 2022/10/06 11:40:26 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_a = 0;
	return ;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_a  = f.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	_a = (nb << _b);
}

Fixed::Fixed(const float nb)
{
	_a = roundf(nb * pow(2, _b));
}

int	Fixed::getRawBits(void) const
{
	return (this->_a);
}

void	Fixed::setRawBits(int const raw)
{
	this->_a = raw;
	return ;
}

int	Fixed::toInt() const
{
	return (_a >> _b);
}


float	Fixed::toFloat() const
{
	return ((float)_a / (float)pow(2, _b));
}

std::ostream	&operator<<(std::ostream &os, const Fixed &f)
{
	os << (float)f.toFloat();
	return (os);
}

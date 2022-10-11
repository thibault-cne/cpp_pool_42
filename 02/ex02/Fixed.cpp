/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:00:20 by lguillau          #+#    #+#             */
/*   Updated: 2022/10/11 17:51:43 by lguillau         ###   ########.fr       */
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

/* ************************************************************************** */

Fixed::Fixed(const int nb)
{
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

/* ************************************************************************** */

bool	Fixed::operator>(const Fixed &b)
{
	return (this->_a > b.getRawBits());
}

bool	Fixed::operator<(const Fixed &b)
{
	return (this->_a < b.getRawBits());
}

bool	Fixed::operator>=(const Fixed &b)
{
	return (this->_a >= b.getRawBits());
}

bool	Fixed::operator<=(const Fixed &b)
{
	return (this->_a >= b.getRawBits());
}

bool	Fixed::operator==(const Fixed &b)
{
	return (this->_a == b.getRawBits());
}

bool	Fixed::operator!=(const Fixed &b)
{
	return (this->_a >= b.getRawBits());
}

/* ************************************************************************** */

Fixed	Fixed::operator+(const Fixed &b)
{
	this->_a += b.getRawBits();
	return (*this);
}

Fixed	Fixed::operator-(const Fixed &b)
{
	this->_a -= b.getRawBits();
	return (*this);
}

Fixed	Fixed::operator*(const Fixed &b)
{
	this->_a *= b.getRawBits();
	return (*this);
}

Fixed	Fixed::operator/(const Fixed &b)
{
	this->_a /= b.getRawBits();
	return (*this);
}


/* ************************************************************************** */

Fixed	Fixed::operator++(void)
{
	++this->_a;
	return (*this);
}

Fixed	Fixed::operator--(void)
{
	--this->_a;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp = *this;

	tmp._a++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;

	tmp._a--;
	return (tmp);
}

/* ************************************************************************** */

Fixed	Fixed::max(Fixed &a, Fixed &b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

Fixed	Fixed::min(Fixed &a, Fixed &b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed	Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

Fixed	Fixed::min(Fixed const &a, Fixed const &b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

/* ************************************************************************** */

std::ostream	&operator<<(std::ostream &os, const Fixed &f)
{
	os << (float)f.toFloat();
	return (os);
}

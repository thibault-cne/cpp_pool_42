/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:50:50 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/13 23:44:04 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n)
{
	this->_n = n;
	return ;
}

Span::Span(const Span &src)
{
	*this = src;
}

Span::~Span()
{
}

Span	&Span::operator=(const Span &src)
{
	this->_v = src._v;
	this->_n = src._n;
	return (*this);
}

void	Span::addNumber(int nb)
{
	if (this->_v.size() >= this->_n)
		throw (std::out_of_range("Max Span size reached"));
	this->_v.push_back(nb);
}

int	shortestSpan(void)
{
	int	span;

	if (this->_v.size() <= 1)
		throw (std::lenght_error("Spam too small"));
}

int	longestSpan(void)
{
	int	span;

	if (this->_v.size() <= 1)
		throw (std::lenght_error("Spam too small"));
	span = std::max_element(_v.begin(), _v.end)
		- std::min_element(_v.begin(), _v.end);
	return (span);
}

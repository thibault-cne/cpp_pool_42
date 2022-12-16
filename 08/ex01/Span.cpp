/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:50:50 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/16 16:30:28 by lguillau         ###   ########.fr       */
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

int	Span::shortestSpan(void)
{
	int	span = 2147483647;
	int	tmp;
	int	i = 0;

	if (this->_v.size() <= 1)
		throw (std::length_error("Span too small"));
	std::sort(this->_v.begin(), this->_v.end());
	while ((unsigned long)++i < this->_v.size())
	{
		tmp = this->_v[i] - this->_v[i - 1];
		if (tmp < span)
			span = tmp;
	}
	return (span);
}

int	Span::longestSpan(void)
{
	int	span;

	if (this->_v.size() <= 1)
		throw (std::length_error("Span too small"));
	span = *std::max_element(this->_v.begin(), this->_v.end()) - *std::min_element(this->_v.begin(), this->_v.end());
	return (span);
}

void	Span::superAddNumber(unsigned int n)
{
	if (n + this->_v.size() >= this->_n)
		throw (std::out_of_range("not enough space in span"));
	std::vector<int>	tmp;
	srand(time(NULL));
	for (unsigned int i = 0; i < n; i++)
		tmp.push_back(rand());
	this->_v.insert(this->_v.end(), tmp.begin(), tmp.end());
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:45:10 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/16 14:37:24 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <stdexcept>
#include <algorithm>

class Span
{
	public:
		Span(unsigned int n);
		Span(const Span &src);
		~Span();

		Span	&operator=(const Span &src);

		void	addNumber(int nb);
		void	superAddNumber(unsigned int n);

		int	shortestSpan(void);
		int	longestSpan(void);

	private:
		Span();
		unsigned int _n;
		std::vector<int>	_v;
};

#endif

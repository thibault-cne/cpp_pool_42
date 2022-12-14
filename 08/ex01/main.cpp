/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 22:44:25 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/14 15:33:00 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span	a(10);

	try {
		for (int i = -1; i < 9; ++i)
			a.addNumber(i);
		std::cout << "Max Span: " <<  a.longestSpan() << std::endl;
		std::cout << "Min Span: " << a.shortestSpan() << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

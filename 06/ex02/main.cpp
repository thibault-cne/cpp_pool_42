/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:16:00 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/07 13:11:24 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main(void)
{
	Base *a;
	
	std::cout << "==== Pointer ====" << std::endl;
	a = generate();
	identify(a);
	delete a;

	std::cout << "==== Reference ====" << std::endl;

	Base *c = generate();
	identify(*c);
	delete c;

	return (0);
}

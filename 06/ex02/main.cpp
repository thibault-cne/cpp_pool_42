/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:16:00 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/07 14:26:42 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main(void)
{
	std::cout << "==== Pointer ====" << std::endl;
	Base *a = generate();
	identify(a);
	delete a;

	std::cout << "==== Reference ====" << std::endl;

	Base *c = generate();
	identify(*c);
	delete c;
	return (0);
}

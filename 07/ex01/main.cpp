/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:56:44 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/11 20:22:18 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	char str[] = "toto";

	iter(tab, 10, f<int>);
	std::cout << std::endl;
	iter(str, 5, f<char>);
	std::cout << std::endl;
	return (0);
}

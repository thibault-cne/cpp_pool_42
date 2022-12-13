/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:40:52 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/13 22:33:32 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int	main(void)
{
	std::vector<int>	arr(10, 3);
	std::list<int>		lst;

	/* Vector */
	try {
		easyfind(arr, 3);
		easyfind(arr, 100);
	}
	catch (const std::exception& e) {
		    std::cerr << e.what() << '\n';
	}
	/* List */
	try {
		for (int i=0; i<5; i++)
			lst.push_back(i);
		easyfind(lst, 2);
		easyfind(lst, 100);
	}
	catch (const std::exception& e) {
		    std::cerr << e.what() << '\n';
	}
	return (0);
}

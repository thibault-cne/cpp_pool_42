/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:45:45 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/26 12:07:27 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac != 4)
		return (std::cout << "Invalid number of arguments" << std::endl, 0);

	std::string	filename(av[1]);
	std::string	s1(av[2]);
	std::string	s2(av[3]);

	std::ifstream	ifs("o");
	std::ofstream	cfs("replace");


	ifs.close();
	cfs.close();
	
	return (0);
}

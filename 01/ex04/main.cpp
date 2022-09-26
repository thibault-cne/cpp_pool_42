/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:45:45 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/26 13:39:23 by lguillau         ###   ########.fr       */
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

	std::ifstream	ifs(filename.c_str());
	if (!ifs)
		return (std::cout << "Invalid file" << std::endl, 0);

	filename += ".replace";
	std::ofstream	cfs(filename.c_str());
	if (!cfs)
	{
		ifs.close();
		return (std::cout << "Impossible to create file" << std::endl, 0);
	}

	std::string	line;
	std::string	tmp;

	while (getline(ifs, line))
	{
		if (line == s1)
			cfs << s2 << std::endl;
		else
			cfs << line << std::endl;
	}

	ifs.close();
	cfs.close();

	return (0);
}

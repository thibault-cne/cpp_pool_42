/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:45:45 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/29 15:36:52 by lguillau         ###   ########.fr       */
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

	std::string	line;
	int		prev;
	int		found;

	/* Open files */

	if (s1.empty())
		return (std::cout << "S1 is empty" << std::endl, 0);

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

	/* Read and cut */

	while (getline(ifs, line))
	{
		prev = 0, found = 0;
		if (line.find(s1, 0) == std::string::npos)
			cfs << line << std::endl;
		else
		{
			while (found != (int)line.length() && ((found = line.find(s1, found)) != (int)std::string::npos))
			{
				cfs << line.substr(prev, found - prev);
				found += s1.length();
				prev = found;
				cfs << s2;
			}
			cfs << line.substr(prev);
			cfs << std::endl;
		}
	}

	ifs.close();
	cfs.close();

	return (0);
}

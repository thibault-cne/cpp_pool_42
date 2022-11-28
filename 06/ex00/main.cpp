/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:48:40 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/28 16:40:56 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <cstdlib>

int	main(int ac, char **av)
{
	if (ac < 2 || ac > 2)
		return (std::cout << "Invalid number of arguments" << std::endl, 0);

	std::string	str(av[1]);
	double	d = std::atof(str.c_str());

	convChar(d);
	convInt(d);
	convFloat(d);
	convDouble(d);

	return (1);
}

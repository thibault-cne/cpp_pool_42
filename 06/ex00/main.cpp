/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 17:48:40 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/28 15:14:36 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main(int ac, char **av)
{
	if (ac < 2 || ac > 2)
		return (std::cout << "Invalid number of arguments" << std::endl, 0);

	std::string	str(av[1]);

	convChar(str);
	convInt(str);
	convFloat(str);
	convDouble(str);

	return (1);
}

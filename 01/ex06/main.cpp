/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:51:24 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/26 16:38:01 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;
	
	if (ac != 2)
		return (std::cout << "Invalid arguments" << std::endl, 0);
	std::string	str(av[1]);
	harl.complain(str);
	return (0);
}

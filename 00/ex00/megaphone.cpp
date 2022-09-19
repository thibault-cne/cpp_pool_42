/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:09:01 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/16 00:59:47 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


void	print_strings(std::string str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = toupper(str[i]);
	}
	std::cout << str;
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 1)
		return (std::cout << "* LOUD AND UNBEARBLE FEEDBACK NOISE *" << std::endl, 0);
	while (av[++i])
		print_strings(av[i]);
	std::cout << std::endl;
	return (0);
}

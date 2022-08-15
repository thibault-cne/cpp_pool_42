/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:09:01 by lguillau          #+#    #+#             */
/*   Updated: 2022/08/14 21:03:56 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

void	print_strings(string str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	cout << str;
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 1)
		return (cout << "* LOUD AND UNBEARBLE FEEDBACK NOISE *" << endl, 0);
	while (av[++i])
		print_strings(av[i]);
	cout << endl;
	return (0);
}

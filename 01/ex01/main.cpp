/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:03:39 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/23 10:40:22 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	i = -1;
	Zombie	*zombie = zombieHorde(20, "Toto");

	while (++i < 20)
		zombie[i].announce();

	delete[] zombie;
	return (0);
}

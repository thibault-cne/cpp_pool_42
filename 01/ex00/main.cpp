/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:53:43 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/19 18:59:23 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*Zombie = newZombie("Toto");
	
	Zombie->announce();
	randomChump("Tata");
	delete Zombie;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:42:25 by lguillau          #+#    #+#             */
/*   Updated: 2022/10/27 18:09:39 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	ScavTrap a("Tata");

	a.attack("b");
	a.takeDamage(50);
	a.beRepaired(10);
}

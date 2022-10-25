/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:42:25 by lguillau          #+#    #+#             */
/*   Updated: 2022/10/25 15:55:25 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	a("Toto");

	a.attack("Tata");
	COUT a.getEnergyPoints() << " energy points left" ENDL;
	a.takeDamage(8);
	a.beRepaired(2);
	COUT a.getEnergyPoints() << " energy points left" ENDL;
	a.takeDamage(4);
	a.attack("Tata");
}

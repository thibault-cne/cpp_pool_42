/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:42:25 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/02 18:03:26 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

int	main(void)
{
	FragTrap a("Tata");

	a.attack("b");
	a.takeDamage(50);
	a.guardGate();
	a.beRepaired(10);
}

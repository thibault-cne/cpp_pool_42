/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:10:17 by lguillau          #+#    #+#             */
/*   Updated: 2022/10/26 19:47:22 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	COUT "ScavTrap" ENDL;
}

ScavTrap::ScavTrap(std::string s)
{
	COUT "ScavTrap" ENDL;
	this->setName(s);
}

ScavTrap::~ScavTrap()
{
	COUT "ScavTrap desctructor callled" ENDL;
}

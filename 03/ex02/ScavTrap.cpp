/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:10:17 by lguillau          #+#    #+#             */
/*   Updated: 2022/10/27 18:07:06 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	COUT "ScavTrap default construtor callled" ENDL;
	this->setName("");
	this->setAttackDamage(30);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	return ;
}

ScavTrap::ScavTrap(std::string s)
{
	COUT "ScavTrap constructor called" ENDL;
	this->setName(s);
	this->setAttackDamage(30);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &s) : ClapTrap(s)
{
	COUT "ScavTrap copy construtor called" ENDL;
	*this = s;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &s)
{
	COUT "Copy assignement operator called" ENDL;
	this->setName(s.getName());
	this->setEnergyPoints(s.getEnergyPoints());
	this->setAttackDamage(s.getAttackDamage());
	this->setHitPoints(s.getHitPoints());
	return (*this);
}

ScavTrap::~ScavTrap()
{
	COUT "ScavTrap desctructor callled" ENDL;
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->getHitPoints() == 0)
	{
		COUT "ScavTrap " << this->getName() << " is dead! he can't attack" ENDL;
		return ;
	}
	if (this->getEnergyPoints() == 0)
	{
		COUT "ScavTrap " << this->getName() << " has no energy! he can't attack" ENDL;
		return ;
	}
	COUT "ScavTrap " << this->getName() << " hits " << target
			 << ", dealing " << this->getAttackDamage()
			 << " points of damge!" ENDL;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	return ;
}

void	ScavTrap::guardGate(void)
{
	if (this->getHitPoints() == 0)
	{
		COUT "ScavTrap " << this->getName() << " is dead! he can't gate keep" ENDL;
		return ;
	}
	if (this->getEnergyPoints() == 0)
	{
		COUT "ScavTrap " << this->getName() << " has no energy! he can't gate keep" ENDL;
		return ;
	}
	COUT "ScavTrap is entering gate keeeper mode!" ENDL;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}	

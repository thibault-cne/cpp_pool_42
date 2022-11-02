/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:10:17 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/02 18:02:22 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	COUT "FragTrap default construtor callled" ENDL;
	this->setName("");
	this->setAttackDamage(30);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	return ;
}

FragTrap::FragTrap(std::string s)
{
	COUT "FragTrap constructor called" ENDL;
	this->setName(s);
	this->setAttackDamage(30);
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	return ;
}

FragTrap::FragTrap(FragTrap const &s) : ClapTrap(s)
{
	COUT "FragTrap copy construtor called" ENDL;
	*this = s;
	return ;
}

FragTrap	&FragTrap::operator=(const FragTrap &s)
{
	COUT "Copy assignement operator called" ENDL;
	this->setName(s.getName());
	this->setEnergyPoints(s.getEnergyPoints());
	this->setAttackDamage(s.getAttackDamage());
	this->setHitPoints(s.getHitPoints());
	return (*this);
}

FragTrap::~FragTrap()
{
	COUT "FragTrap desctructor callled" ENDL;
}

void	FragTrap::attack(std::string const &target)
{
	if (this->getHitPoints() == 0)
	{
		COUT "FragTrap " << this->getName() << " is dead! he can't attack" ENDL;
		return ;
	}
	if (this->getEnergyPoints() == 0)
	{
		COUT "FragTrap " << this->getName() << " has no energy! he can't attack" ENDL;
		return ;
	}
	COUT "FragTrap " << this->getName() << " hits " << target
			 << ", dealing " << this->getAttackDamage()
			 << " points of damge!" ENDL;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	return ;
}

void	FragTrap::guardGate(void)
{
	if (this->getHitPoints() == 0)
	{
		COUT "FragTrap " << this->getName() << " is dead! he can't gate keep" ENDL;
		return ;
	}
	if (this->getEnergyPoints() == 0)
	{
		COUT "FragTrap " << this->getName() << " has no energy! he can't gate keep" ENDL;
		return ;
	}
	COUT "FragTrap is entering gate keeeper mode!" ENDL;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
}	

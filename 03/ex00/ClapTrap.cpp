/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:59:47 by lguillau          #+#    #+#             */
/*   Updated: 2022/10/25 15:56:16 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str)
{
	COUT "Default constructor called" ENDL;
	this->_name = str;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &c)
{
	COUT "Copy constructor called" ENDL;
	*this = c;
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &c)
{
	COUT "Copy assignement operator called" ENDL;
	this->_name= c.getName();
	this->_energyPoints = c.getEnergyPoints();
	this->_attackDamage = c.getAttackDamage();
	this->_hitPoints = c.getHitPoints();
	return (*this);
}

ClapTrap::~ClapTrap()
{
	COUT "Destructor called" ENDL;
	return ;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->getHitPoints() == 0)
	{
		COUT "ClapTrap " << this->getName() << " is dead! he can't attack" ENDL;
		return ;
	}
	if (this->getEnergyPoints() == 0)
	{
		COUT "ClapTrap " << this->getName() << " has no energy! he can't attack" ENDL;
		return ;
	}
	COUT "ClapTrap " << this->getName() << " attacks " << target
			 << ", causing " << this->getAttackDamage()
			 << " points of damge!" ENDL;
	this->_energyPoints--;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->getHitPoints() == 0)
	{
		COUT "ClapTrap " << this->getName() << " is already dead!" ENDL;
		return ;
	}
	if (amount > this->_hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -= amount;
	COUT "ClapTrap " << this->getName() << " takes " << amount << " damage! "
			<< this->getHitPoints() << " left" ENDL;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHitPoints() == 0)
	{
		COUT "ClapTrap " << this->getName() << " is dead! he can't be repaired" ENDL;
		return ;
	}
	if (this->getEnergyPoints() == 0)
	{
		COUT "ClapTrap " << this->getName() << " has no energy! he can't be repaired" ENDL;
		return ;
	}
	this->_hitPoints += amount;
	this->_energyPoints--;
	COUT "ClapTrap " << this->getName() << " gets " << amount << " hp restored! now at -> "
			<< this->getHitPoints() ENDL;
	return ;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

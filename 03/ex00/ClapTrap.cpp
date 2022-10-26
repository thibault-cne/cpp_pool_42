/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:59:47 by lguillau          #+#    #+#             */
/*   Updated: 2022/10/26 19:42:44 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	COUT "Default Constructor called" ENDL;
	return ;
}

ClapTrap::ClapTrap(std::string s) : _name(s), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	COUT "Constructor called" ENDL;
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

void	ClapTrap::setName(std::string str)
{
	this->_name = str;
}

void	ClapTrap::setHitPoints(unsigned int amount)
{
	this->_hitPoints = amount;
}

void	ClapTrap::setEnergyPoints(unsigned int amount)
{
	this->_energyPoints = amount;
}

void	ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attackDamage = amount;
}

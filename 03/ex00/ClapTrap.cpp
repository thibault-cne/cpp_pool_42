/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:59:47 by lguillau          #+#    #+#             */
/*   Updated: 2022/10/25 14:57:09 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string str)
{
	COUT "Default constructor called" ENDL;
	this->_name = str;
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
		COUT "ClapTrap " << this->getName() << " takes " << amount << " damage!" ENDL;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
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

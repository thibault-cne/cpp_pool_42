/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:10:17 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/03 18:34:37 by lguillau         ###   ########.fr       */
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

void	FragTrap::highFiveGuys(void)
{
	COUT this->getName() << " ask for a high five!" ENDL;
}

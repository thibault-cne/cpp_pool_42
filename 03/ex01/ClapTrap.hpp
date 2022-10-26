/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:39:51 by lguillau          #+#    #+#             */
/*   Updated: 2022/10/26 19:43:04 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# define COUT std::cout <<
# define ENDL << std::endl

class ClapTrap
{
	public:

		ClapTrap();
		ClapTrap(std::string str);
		ClapTrap(const ClapTrap &c);
		ClapTrap	&operator=(const ClapTrap &c);
		~ClapTrap();

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergyPoints(void) const;
		unsigned int	getAttackDamage(void) const;

		void		setName(std::string str);
		void		setEnergyPoints(unsigned int amount);
		void		setHitPoints(unsigned int amount);
		void		setAttackDamage(unsigned int amount);

	private:

		std::string	_name;
		unsigned int	_hitPoints;
		unsigned int	_energyPoints;
		unsigned int	_attackDamage;
};

#endif

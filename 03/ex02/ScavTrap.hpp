/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:02:49 by lguillau          #+#    #+#             */
/*   Updated: 2022/10/27 18:07:48 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap();
		ScavTrap(std::string s);
		ScavTrap(ScavTrap const &s);
		ScavTrap	&operator=(const ScavTrap &s);
		~ScavTrap();

		void	guardGate(void);
		void	attack(const std::string &target);
	
	private:
};

#endif


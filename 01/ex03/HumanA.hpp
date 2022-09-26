/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:54:41 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/26 11:00:23 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:

		HumanA(std::string name, Weapon &weapon);
		~HumanA(void);

		void	attack(void);

	private:
		
		std::string	_name;
		Weapon		&_weapon;
};

#endif

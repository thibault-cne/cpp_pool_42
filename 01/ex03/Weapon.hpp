/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:42:08 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/26 11:36:02 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	public:

		Weapon(std::string type);
		~Weapon(void);

		void		setType(std::string type);
		std::string	&getType(void);

	private:

		std::string	_type;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:02:49 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/02 18:02:53 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

		FragTrap();
		FragTrap(std::string s);
		FragTrap(FragTrap const &s);
		FragTrap	&operator=(const FragTrap &s);
		~FragTrap();

		void	guardGate(void);
		void	attack(const std::string &target);
	
	private:
};

#endif


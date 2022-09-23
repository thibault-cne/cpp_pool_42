/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 18:28:34 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/23 10:42:04 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:

	Zombie(void);
	~Zombie(void);
	
	void	announce(void) const;
	void	set_name(std::string name);

	private:
	
	std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif

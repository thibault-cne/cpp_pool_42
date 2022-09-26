/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:52:48 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/26 15:20:50 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class	Harl
{
	public:

		Harl(void);
		~Harl(void);

		void	complain(std::string level);


	private:

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif

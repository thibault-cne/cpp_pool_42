/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:56:07 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/26 16:36:45 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "* Debug Message *" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "* Info Message *" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "* Waring Message *" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "* Error Message *" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[] = {"debug", "info", "warning", "error"};
	int	i = -1;

	while (++i < 4)
	{
		if (level.compare(levels[i]) == 0)
			break ;
	}
	switch (i)
	{
		case 0:
			this->debug();
			__attribute__((fallthrough));
		case 1:
			this->info();
			__attribute__((fallthrough));
		case 2:
			this->warning();
			__attribute__((fallthrough));
		case 3:
			this->error();
			break;
		default:
			std::cout << "* Default message *" << std::endl;
			break;
	}
}

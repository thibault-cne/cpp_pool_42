/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:56:07 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/26 15:20:28 by lguillau         ###   ########.fr       */
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
	std::cout <<"* Debug Message *" << std::endl;
}

void	Harl::info(void)
{
	std::cout <<"* Info Message *" << std::endl;
}

void	Harl::warning(void)
{
	std::cout <<"* Waring Message *" << std::endl;
}

void	Harl::error(void)
{
	std::cout <<"* Error Message *" << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[] = {"debug", "info", "warning", "error"};
	int	i = -1;
	void	(Harl::*_func[4])(void);

	_func[0] = &Harl::debug;
	_func[1] = &Harl::info;
	_func[2] = &Harl::warning;
	_func[3] = &Harl::error;

	while (++i < 4)
	{
		if (level.compare(levels[i]) == 0)
			break ;
	}
	if (i != 4)
		(this->*_func[i])();
}

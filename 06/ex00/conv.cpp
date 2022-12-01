/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:01:27 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/01 22:06:50 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <string>
#include <limits.h>
#include <iomanip>

bool	isNumber(std::string s)
{
	return (s.find_first_not_of("0123456789-") == string::npos);
}

void	convInt(std::string s)
{
	std::cout << "int: ";
	long long int	i = s;
	if (i < INT_MIN || i > INT_MAX)
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	std::cout << i << std::endl;
}

void	convChar(std::string s)
{
	std::cout << "char: ";
	char	c;
	if (isNumber(s))
	{
		c = std::atof(s.c_str());
		if (c < -128 || c > 127)
		{
			std::cout << "impossible" << std::endl;
			return ;
		}
		if (c < 32 || c > 127)
		{
			std::cout << "Non displayable" << std::endl;
			return ;
		}
		std::cout << c << std::endl;
	}
	else
	{
		if (s.size() == 1)
		{
			std::cout << s << std::endl;
		}
		else
			std::cout << "impossible" << std::endl;
	}
}

void	convFloat(std::string s)
{
	std::cout << "float: ";
	float	f = s;
	std::cout << std::fixed;
	std::cout << f << "f" << std::endl;
}

void	convDouble(std::string s)
{
	std::cout << "double: ";
	std::cout << std::fixed;
	std::cout << s << std::endl;
}

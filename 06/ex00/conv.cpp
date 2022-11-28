/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:01:27 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/28 17:03:40 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <string>
#include <limits.h>
#include <iomanip>

void	convInt(double s)
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

void	convChar(double s)
{
	std::cout << "char: ";
	char	c = s;
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

void	convFloat(double s)
{
	std::cout << "float: ";
	float	f = s;
	std::cout << std::fixed;
	std::cout << f << "f" << std::endl;
}

void	convDouble(double s)
{
	std::cout << "double: ";
	std::cout << std::fixed;
	std::cout << s << std::endl;
}

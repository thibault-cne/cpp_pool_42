/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:01:27 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/02 12:54:18 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

bool	isNumber(std::string s)
{
	return (s.find_first_not_of("0123456789.-+") == std::string::npos);
}

void	convInt(std::string s)
{
	std::cout << "int: ";
	long long int	f;
	if (isNumber(s))
	{
		f = static_cast<int>(std::atof(s.c_str()));
		if (f < INT_MIN || f > INT_MAX)
		{
			std::cout << "impossible" << std::endl;
			return ;
		}
		std::cout << f << std::endl;
	}
	else if (s.size() == 1)
	{
		f = s[0];
		std::cout << f << std::endl;
	}
	else
	{
		std::cout << "impossible" << std::endl;
		return ;
	}
	return ;
}

void	convChar(std::string s)
{
	std::cout << "char: ";
	char	c;
	double	d;
	if (isNumber(s))
	{
		d = std::atof(s.c_str());
		c = static_cast<char>(d);
		if (d < -128 || d > 127)
		{
			std::cout << "impossible" << std::endl;
			return ;
		}
		if (d < 32 || d > 127)
		{
			std::cout << "Non displayable" << std::endl;
			return ;
		}
		std::cout << "'" << c << "'" << std::endl;
	}
	else
	{
		if (s.size() == 1)
		{
			std::cout << "'" << s << "'" << std::endl;
		}
		else
			std::cout << "impossible" << std::endl;
	}
}

void	convFloat(std::string s)
{
	std::cout << "float: ";
	float	f;
	if (isNumber(s))
	{
		f = static_cast<float>(std::atof(s.c_str()));
		std::cout << f << "f" << std::endl;
	}
	else if (s.size() == 1)
	{
		f = s[0];
		std::cout << f << "f" << std::endl;
	}
	else
	{
		f = static_cast<float>(std::atof(s.c_str()));
		if (f == 0)
		{
			std::cout << "impossible" << std::endl;
			return ;
		}
		std::cout << f << "f" << std::endl;
	}
	return ;
}

void	convDouble(std::string s)
{
	std::cout << "double: ";
	double	f;
	if (isNumber(s))
	{
		f = std::atof(s.c_str());
		std::cout << f << std::endl;
	}
	else if (s.size() == 1)
	{
		f = s[0];
		std::cout << f << std::endl;
	}
	else
	{
		f = std::atof(s.c_str());
		if (f == 0)
		{
			std::cout << "impossible" << std::endl;
			return ;
		}
		std::cout << f << std::endl;
	}
	return ;
}

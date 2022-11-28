/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conv.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:01:27 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/28 15:01:17 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"
#include <string>

void	convInt(std::string const s)
{
	std::cout << "int: ";
	std::cout << std::stoi(s) << std::endl;
}

void	convChar(std::string const s)
{
	std::cout << "char: ";
	char	c = std::stoi(s);
	std::cout << c << std::endl;
}

void	convFloat(std::string const s)
{
	std::cout << "float: ";
	std::cout << std::stof(s) << std::endl;
}

void	convDouble(std::string const s)
{
	std::cout << "double: ";
	std::cout << std::stod(s) << std::endl;
}

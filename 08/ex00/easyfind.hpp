/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:41:51 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/13 22:27:41 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <iterator>
#include <stdexcept>
#include <algorithm>

template <typename T>
void	easyfind(T a, int b)
{
	if (std::find(a.begin(), a.end(), b) == a.end())
	{
		throw (std::invalid_argument("No occurrence found"));
	}
	std::cout << b << std::endl;
}

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 19:57:38 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/11 20:21:07 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void	f(T const &array)
{
	std::cout << array;
}

template <typename T>
void	iter(T *array, int length, void (*f)(T const &))
{
	int	i = -1;

	while (++i < length)
		f(array[i]);
}

#endif

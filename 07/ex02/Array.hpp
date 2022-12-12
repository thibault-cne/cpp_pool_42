/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:08:10 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/12 16:42:55 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class Array
{
	public:

		Array() {
			this->array = new T[0];
		}

		Array(unsigned int n) {
			this->array = new T[n];
		}

		Array(const Array &src) {
			this->array = new T[src.size()];
			int	i = -1;
			while (++i < src.size())
				array[i] = src.array[i];
		}

		~Array() {
			delete[] array;
		}

		Array	&operator=(const Array &src) {
			(void)src;
			return (*this);
		}

		int	size(void) {
			return (sizeof this->array / sizeof this->array[0]);
		}

	private:
		T	*array;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:08:10 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/13 00:11:53 by lguillau         ###   ########.fr       */
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

		Array()
		{
			this->array = new T[0];
			this->_n = 0;
		}
		Array(unsigned int n)
		{
			this->array = new T[n];
			this->_n = n;
		}
		Array(const Array<T> &src)
		{
			int	i = -1;

			this->_n = src.size();
			this->array = new T[this->_n];
			while (++i < this->_n)
				this->array[i] = src[i];
		}
		~Array()
		{
			delete[] this->array;
		}
		Array<T> &operator=(const Array<T> &src)
		{
			int	i = -1;

			if (this->array)
				delete[] this->array;
			this->_n = src.size();
			this->array = new T[this->_n];
			while (++i < src.size())
				this->array[i] = src[i];
			return (*this);
		}
		T	&operator[](unsigned int i) const
		{
			if (i >= (unsigned int)this->_n)
				throw std::exception();
			return (this->array[i]);
		}
		int	size(void) const
		{
			return (this->_n);
		}

	private:
		T	*array;
		int	_n;
};

#endif

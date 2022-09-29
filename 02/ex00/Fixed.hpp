/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:46:02 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/29 16:04:43 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:

		Fixed();
		Fixed(const Fixed&);
		Fixed	&operator=(const Fixed&);
		~Fixed();

		int	getRawBits(void) const;
		void	setRawBits(int const raw);

	private:

		int			_a;
		static const int	_b;
};

#endif

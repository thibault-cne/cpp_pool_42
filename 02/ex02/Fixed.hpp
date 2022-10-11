/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:46:02 by lguillau          #+#    #+#             */
/*   Updated: 2022/10/11 17:51:31 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>
# include <bitset>

class Fixed
{
	public:

		Fixed();
		Fixed(const Fixed &f);
		Fixed	&operator=(const Fixed &f);
		~Fixed();

		Fixed(const int nb);
		Fixed(const float nb);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int	toInt(void) const;

		bool	operator>(const Fixed &b);
		bool	operator<(const Fixed &b);
		bool	operator>=(const Fixed &b);
		bool	operator<=(const Fixed &b);
		bool	operator==(const Fixed &b);
		bool	operator!=(const Fixed &b);

		Fixed	operator+(const Fixed &b);
		Fixed	operator-(const Fixed &b);
		Fixed	operator*(const Fixed &b);
		Fixed	operator/(const Fixed &b);

		Fixed	operator++(void);
		Fixed	operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		Fixed	static	min(Fixed &a, Fixed &b);
		Fixed	static	max(Fixed &a, Fixed &b);
		Fixed	static	min(Fixed const &a, Fixed const &b);
		Fixed	static	max(Fixed const &a, Fixed const &b);


	private:

		int			_a;
		static const int	_b = 8;
};

std::ostream	&operator<<(std::ostream &os, const Fixed &f);

#endif

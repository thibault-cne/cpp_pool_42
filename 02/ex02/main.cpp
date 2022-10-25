/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:27:02 by lguillau          #+#    #+#             */
/*   Updated: 2022/10/25 11:44:54 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	{
		Fixed a;
		Fixed const b( Fixed( 555.05f ) * Fixed( 22 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout <<  b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	{
		std::cout << std::endl << std::endl;
		Fixed a;
		Fixed b(42.32f);
		Fixed c(2);
		Fixed d;
		Fixed f(Fixed(100) / Fixed(3));

		d = b / c;
		std::cout << "d = b(42.32) / 2:  " << d << std::endl;
		a = d + c;
		std::cout << "a = d(21.16 + 2:  " << a << std::endl;
		a = a * c;
		std::cout << "a *=2:  " << a << std::endl;
		std::cout <<"100 /3: " << f << std::endl;
		std::cout <<"42.32 / 2.2: " << b / 2.2f << std::endl;
		if (b == 42.33f)
			std::cout <<"42.32 == 42.33: " << "true"<< std::endl;
		else
			std::cout <<"42.32 == 42.33: " << "false"<< std::endl;
		if (b > Fixed(42.318f))
			std::cout <<"42.32 > 42.318: " << "true"<< std::endl;
		else
			std::cout <<"42.32 > 42.318: " << "false"<< std::endl;
		std::cout << Fixed::max(42,40.4222f) << std::endl;

	}
}

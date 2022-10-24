/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:27:02 by lguillau          #+#    #+#             */
/*   Updated: 2022/10/24 18:49:36 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed a;
	int	i = 0;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c( Fixed(15.3f) / Fixed(3.3f) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << "++i" << ++i << std::endl;
	std::cout << "i++" << i++ << std::endl;
	std::cout << i << std::endl;
	std::cout <<"a++ =" << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout <<"b="<<  b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << c << std::endl;
	return (0);	
}

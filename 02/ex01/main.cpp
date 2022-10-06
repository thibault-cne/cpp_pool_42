/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:27:02 by lguillau          #+#    #+#             */
/*   Updated: 2022/10/06 11:48:13 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::string toBinary(int n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

int	main(void)
{

	{
		std::cout << "Binary Main" << std::endl << std::endl;

		Fixed a(42.42f);

		std::cout << "Raw bits : " << a.getRawBits() << std::endl;
		std::cout << "Binary : " << toBinary(a.getRawBits()) << std::endl;
		std::cout << "a is " << a << std::endl;

	}

	{
		std::cout << std::endl << "Subject Main" << std::endl << std::endl;
		Fixed a;
		Fixed const b( 10 );
		Fixed const c( 42.42f );
		Fixed const d( b );

		a = Fixed( 1234.4321f );

		std::cout << "a is " << a << std::endl;
		std::cout << "b is " << b << std::endl;
		std::cout << "c is " << c << std::endl;
		std::cout << "d is " << d << std::endl;

		std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	}

	return (0);	
}

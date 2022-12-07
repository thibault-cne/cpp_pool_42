/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:58:23 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/07 13:13:29 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Base::~Base()
{
	return ;
}

Base	*generate(void)
{
	srand(time(NULL));
	int	rVar = rand() % 3 + 1;
	Base	*b;

	if (rVar == 1)
	{
		b = new A();
		std::cout << "A created" << std::endl;
	}
	else if (rVar == 2)
	{
		b = new B();
		std::cout << "B created" << std::endl;
	}
	else
	{
		b = new C();
		std::cout << "C created" << std::endl;
	}
	return (b);
};

void	identify(Base *p)
{
	Base *a;
	Base *b;
	Base *c;
	a = dynamic_cast<A*>(p);
	if (a != NULL)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	b = dynamic_cast<B*>(p);
	if (b != NULL)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	c = dynamic_cast<C*>(p);
	if (c != NULL)
	{
		std::cout << "C" << std::endl;
		return ;
	}
}

void	identify(Base &p)
{
	try {
		p = dynamic_cast<A*>(p);
		std::cout << "A" << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

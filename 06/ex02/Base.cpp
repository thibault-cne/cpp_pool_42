/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:58:23 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/06 19:41:54 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

Base::~Base()
{
	return ;
}

Base	*Base::generate(void)
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
	else if (rVar == 3)
	{
		b = new C();
		std::cout << "C created" << std::endl;
	}
	return (b);
};

void	Base::identify(Base *p)
{
	(void)p;
}

void	Base::identify(Base &p)
{
	(void)p;
}

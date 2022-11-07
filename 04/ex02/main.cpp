/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:27:48 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/07 18:56:14 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define NB 1000
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
//	Animal t = Animal();
	const Animal *meta[NB];
	int	i = -1;


	std::cout << std::endl << "====Construtors calls====" << std::endl;
	std::cout << std::endl << "=Dogs=" << std::endl;
	while (++i < NB / 2)
	{
		meta[i] = new Dog();
		std::cout << std::endl;
	}
	std::cout << std::endl << "=Cats=" << std::endl;
	i--;
	while (++i < NB)
	{
		meta[i] = new Cat();
		std::cout << std::endl;
	}

	std::cout << std::endl << "====Destructor calls===" << std::endl << std::endl;
	i = -1;
	while (++i < NB)
	{
		delete meta[i];
		std::cout << std::endl;
	}
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
	Cat basic;
	{
		std::cout << std::endl;
		Cat tmp = Cat(basic);
	}
	std::cout << std::endl;
	return (0);
}

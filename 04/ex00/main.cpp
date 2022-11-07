/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 19:27:48 by lguillau          #+#    #+#             */
/*   Updated: 2022/11/07 12:32:28 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		std::cout <<"-Animal-" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		std::cout << "Cat sound: ";
		i->makeSound(); 
		std::cout << "Dog sound: ";
		j->makeSound();
		std::cout << "Animal sound: ";
		meta->makeSound();
	}
	{
		std::cout << std::endl << "-Wrong Animal-" << std::endl;
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();

		std::cout << i->getType() << " " << std::endl;
		std::cout << "WrongCat sound: ";
		i->makeSound(); 
		std::cout << "WrongAnimal sound: ";
		meta->makeSound();
	}

	return (0);
}

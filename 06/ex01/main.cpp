/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 12:57:22 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/05 18:54:52 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <stdint.h>
#include <cstdlib>

struct	Data
{
	public:
	std::string	str;
	int		nbr;
};

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(int ac, char **av)
{
	if (ac != 3)
		return (std::cout << "err args" << std::endl, 0);
	Data	a;
	Data	*b;
	uintptr_t	ptr;
	
	a.str = av[1];
	a.nbr = static_cast<int>(atof(av[2]));

	ptr = serialize(&a);
	b = deserialize(ptr);

	std::cout << "a: "<< a.str << " - " << a.nbr << " - " << &a << std::endl;
	std::cout << "b: "<< b->str << " - " << b->nbr << " - " << b << std::endl;

	return (0);
}

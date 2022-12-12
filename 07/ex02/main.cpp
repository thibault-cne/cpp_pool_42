/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 16:06:48 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/13 00:15:39 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int>	arr(10);

	try {
		int	i = -1;

		while (++i < 10)
			arr[i] = i;
		i = -1;
		while (++i < 10)
			std::cout << arr[i];
		std::cout << std::endl;
	}
	catch (const std::exception& e)
	{
	    std::cerr << e.what() << '\n';
	}

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:17:27 by lguillau          #+#    #+#             */
/*   Updated: 2022/08/15 13:07:41 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	PhoneBook	library;

	library.add_contact("LASSALE", "Jean", "1");
	library.add_contact("LASSALE", "Jean", "2");
	library.add_contact("LASSALE", "Jean", "3");
	library.add_contact("LASSALE", "Jean", "4");
	library.add_contact("LASSALE", "Jean", "5");
	library.add_contact("LASSALE", "Jean", "6");
	library.add_contact("LASSALE", "Jean", "7");
	library.add_contact("LASSALE", "Jean", "8");
	library.add_contact("Seesh", "Kebab", "9");
	library.add_contact("LASSALE", "Jean", "10");
	library.add_contact("LASSALE", "Jean", "11");
	library.print_contact_list();
}

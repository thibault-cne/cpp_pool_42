/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:17:27 by lguillau          #+#    #+#             */
/*   Updated: 2022/08/31 02:25:36 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	PhoneBook	library;
	string	command;
	t_info	info;
	
	while (1)
	{
		cout << "~> ";
		if (!getline(cin, command))
			return (0);
		if (command == "ADD")
		{
			cout << "First name: ";
			if (!getline(cin, info.first_name))
				return (0);
			cout << "Last name: ";
			if (!getline(cin, info.last_name))
				return (0);
			cout << "Nickname: ";
			if (!getline(cin, info.nickname))
				return (0);
			cout << "Phone number: ";
			if (!getline(cin, info.phone_number))
				return (0);
			cout << "Darkest secret: ";
			if (!getline(cin, info.darkest_secret))
				return (0);
			library.add(&info);

		}
		if (command == "SEARCH")
		{
			library.search();
		}
		if (command == "EXIT")
			return (0);

	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:17:27 by lguillau          #+#    #+#             */
/*   Updated: 2022/08/30 22:34:52 by lguillau         ###   ########.fr       */
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
		cin >> command;
		if (command == "ADD")
		{
			cout << "First name: ";
			cin >> info.first_name;
			cout << "Last name: ";
			cin >> info.last_name;
			cout << "Nickname: ";
			cin >> info.nickname;
			cout << "Phone number: ";
			cin >> info.phone_number;
			cout << "Darkest secret: ";
			cin >> info.darkest_secret;
			library.add(&info);

		}
		if (command == "SEARCH")
		{
			library.search();
		}
		if (command == "EXIT")
			exit(0);

	}
}

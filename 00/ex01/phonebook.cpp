/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:17:27 by lguillau          #+#    #+#             */
/*   Updated: 2022/08/21 13:12:55 by lguillau         ###   ########.fr       */
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
		cin >> command;
		if (command == "ADD")
		{
			cout << "First name:";
			cin >> info.first_name;
			cout << endl;
			cout << "Last name:";
			cin >> info.last_name;
			cout << endl;
			cout << "Nickname:";
			cin >> info.nickname;
			cout << endl;
			cout << "Phone number:";
			cin >> info.phone_number;
			cout << endl;
			cout << "Darkest secret:";
			cin >> info.darkest_secret;
			cout << endl;
			library.add(&info);

		}
		if (command == "DISPLAY")
		{
			library.print_contact_list();
		}
		if (command == "EXIT")
			exit(0);

	}
}

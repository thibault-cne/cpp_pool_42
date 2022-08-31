/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:17:27 by lguillau          #+#    #+#             */
/*   Updated: 2022/08/31 19:47:40 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	check_empty(t_info *info)
{
	if (info->first_name.length() == 0 || info->phone_number.length() == 0 
		|| info->nickname.length() == 0 || info->last_name.length() == 0 
		|| info->darkest_secret.length() == 0)
		return (cout << "At least one field is empty please retry" << endl, 0); 
	return (1);
}

/*void	fill_phonebook(t_info *info, PhoneBook *library)
{
	info->first_name = "Contact 1";
	info->last_name = "last name 1";
	info->nickname = "First";
	info->phone_number = "111111";
	info->darkest_secret = "Im the first";
	library->add(info);
	info->first_name = "Contact 2";
	info->last_name = "last name 2";
	info->nickname = "Second";
	info->phone_number = "222222";
	info->darkest_secret = "Im the second";
	library->add(info);
	info->first_name = "Contact 3";
	info->last_name = "last name 3";
	info->nickname = "Third";
	info->phone_number = "333333";
	info->darkest_secret = "Im the third";
	library->add(info);
	info->first_name = "Contact 4";
	info->last_name = "last name 4";
	info->nickname = "4";
	info->phone_number = "444444";
	info->darkest_secret = "4";
	library->add(info);
	info->first_name = "Contact 5";
	info->last_name = "last name 5";
	info->nickname = "5";
	info->phone_number = "555555";
	info->darkest_secret = "5";
	library->add(info);
	info->first_name = "Contact 6";
	info->last_name = "last name 6";
	info->nickname = "6";
	info->phone_number = "666666";
	info->darkest_secret = "6";
	library->add(info);
	info->first_name = "Contact 7";
	info->last_name = "last name 7";
	info->nickname = "7";
	info->phone_number = "777777";
	info->darkest_secret = "Im the first";
	library->add(info);
	info->first_name = "Contact 8";
	info->last_name = "last name 8";
	info->nickname = "8";
	info->phone_number = "888888";
	info->darkest_secret = "8";
	library->add(info);
}*/

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
			if (check_empty(&info))
				library.add(&info);

		}
		if (command == "SEARCH")
		{
			library.search();
		}
		/*if (command == "FILL")
			fill_phonebook(&info, &library);*/
		if (command == "EXIT")
			return (0);

	}
}

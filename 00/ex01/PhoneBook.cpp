/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:23:30 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/14 16:52:44 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook created" << std::endl;
	count = 0;
}

void	PhoneBook::truncate_add_space(std::string str)
{
	if (str.length() > 9)
		std::cout << str.substr(0, 9) + ".";
	else	
	{
		j = -1;
		while (++j < (int)(10 - str.length()))
			std::cout << " ";
		std::cout << str;
	}
	std::cout << "|";
}

void	PhoneBook::print_contact_list(void)
{
	i = -1;
	std::string	str;
	while (++i < 8)
	{
		if (library[i].get_first_name().length() == 0)
			return ;
		std::cout << i + 1 << "|";
		truncate_add_space(library[i].get_first_name());
		truncate_add_space(library[i].get_last_name());
		truncate_add_space(library[i].get_nickname());
		std::cout << std::endl;
	}
}

void	PhoneBook::add(t_info *c)
{
	if (count == 8)
		count = 0;
	library[count].set_last_name(c->last_name);
	library[count].set_first_name(c->first_name);
	library[count].set_phone_number(c->phone_number);
	library[count].set_darkest_secret(c->darkest_secret);
	library[count].set_nickname(c->nickname);
	count++;
}

void	PhoneBook::display_one(std::string index)
{
	if (library[index[0] - 49].get_first_name().length() == 0)
	{
		std::cout << "This index is not available" << std::endl;
		return ;
	}
	std::cout << "First name: " << library[index[0] - 49].get_first_name() << std::endl;
	std::cout << "Last name: " << library[index[0] - 49].get_last_name() << std::endl;
	std::cout << "Nickname: " << library[index[0] - 49].get_nickname() << std::endl;
	std::cout << "Phone number: " << library[index[0] - 49].get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << library[index[0] - 49].get_darkest_secret() << std::endl;
}

void	PhoneBook::search(void)
{
	if (library[0].get_first_name().length() == 0)
	{
		std::cout << "No entry available in the phonebook" << std::endl;
		return ;
	}
	print_contact_list();
	std::cout << "Enter the index of the entry to display: ";
	if (!getline(std::cin, index))
		return ;
	if (index.length() > 1 || index[0] - 48 > 8 || index[0] - 48 < 1)
	{
		std::cout << "This index is not available" << std::endl;
		return ;
	}
	display_one(index);
}

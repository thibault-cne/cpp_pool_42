/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:00:48 by lguillau          #+#    #+#             */
/*   Updated: 2022/08/30 22:55:34 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
using namespace std;

class Contact
{
	private:
		string	first_name;
		string	last_name;
		string	phone_number;
		string	darkest_secret;
		string	nickname;

	public:
		string	get_first_name()
		{
			return (first_name);
		}
		string	get_nickname()
		{
			return (nickname);
		}
		string	get_last_name()
		{
			return (last_name);
		}
		string	get_phone_number()
		{
			return (phone_number);
		}
		string	get_darkest_secret()
		{
			return (darkest_secret);
		}
		void	set_first_name(string str)
		{
			first_name = str;
		}
		void	set_nickname(string str)
		{
			nickname = str;
		}
		void	set_last_name(string str)
		{
			last_name = str;
		}
		void	set_phone_number(string str)
		{
			phone_number = str;
		}
		void	set_darkest_secret(string str)
		{
			darkest_secret = str;
		}
};

typedef struct	s_info
{
	string	last_name;
	string	first_name;
	string	nickname;
	string	darkest_secret;
	string	phone_number;
}	t_info;

class PhoneBook
{
	private:;
		Contact	library[8];
		int	i;
		int	j;
		int	count;
		string	index;
	public:
		PhoneBook()
		{
			count = 0;
		}
		void	truncate_add_space(string str)
		{
			if (str.length() > 9)
				cout << str.substr(0, 9) + ".";
			else
			{
				j = -1;
				while (++j < (int)(10 - str.length()))
					cout << " ";
				cout << str;
			}
			cout << "|";
		}
		void	print_contact_list(void)
		{
			i = -1;
			string	str;
			while (library[++i].get_first_name().length() != 0)
			{
				cout << i << "|";
				truncate_add_space(library[i].get_first_name());
				truncate_add_space(library[i].get_last_name());
				truncate_add_space(library[i].get_nickname());
				cout << endl;
			}
		}
		void	add(t_info *c)
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
		void	display_one(string index)
		{
			cout << "First name: " << library[index[0] - 48].get_first_name() << endl;
			cout << "Last name: " << library[index[0] - 48].get_last_name() << endl;
			cout << "Nickname: " << library[index[0] - 48].get_nickname() << endl;
			cout << "Phone number: " << library[index[0] - 48].get_phone_number() << endl;
			cout << "Darkest secret: " << library[index[0] - 48].get_darkest_secret() << endl;
		}
		void	search(void)
		{
			if (library[0].get_first_name().length() == 0)
			{
				cout << "No entry available in the phonebook" << endl;
				return ;
			}
			print_contact_list();
			cout << "Enter the index of the entry to display: ";
			cin >> index;
			if (index.length() > 1 || index[0] - 48 > 8 || index[0] - 48 < 0)
			{
				cout << "This index is not available" << endl;
				return ;
			}
			display_one(index);
		}
};

#endif

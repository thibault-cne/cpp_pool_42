/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:00:48 by lguillau          #+#    #+#             */
/*   Updated: 2022/08/15 13:05:16 by lguillau         ###   ########.fr       */
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
		string	number;
	public:
		string	get_first_name()
		{
			return (first_name);
		}
		string	get_last_name()
		{
			return (last_name);
		}
		string	get_number()
		{
			return (number);
		}
		void	set_first_name(string str)
		{
			first_name = str;
		}
		void	set_last_name(string str)
		{
			last_name = str;
		}
		void	set_number(string str)
		{
			number = str;
		}
};

class PhoneBook
{
	private:;
		Contact	library[8];
		int	i;
		int	count;
	public:
		PhoneBook()
		{
			count = 0;
			cout << "PhoneBook created" << endl;
		}
		void	print_contact_list(void)
		{
			i = -1;
			while (++i < 8)
			{
				cout << "Contact " << i << endl;
				cout << "last name: " << library[i].get_last_name() << endl;
				cout << "first name: " << library[i].get_first_name() << endl;
				cout << "number: " << library[i].get_number() << endl;
			}
		}
		void	add_contact(string l_n, string f_n, string n)
		{
			if (count == 8)
				count = 0;
			library[count].set_last_name(l_n);
			library[count].set_first_name(f_n);
			library[count].set_number(n);
			count++;
		}
};

#endif

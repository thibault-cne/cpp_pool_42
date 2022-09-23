/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 12:00:48 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/23 11:08:38 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "header.hpp"

class PhoneBook
{
	private:
		Contact	library[8];
		int	i;
		int	count;
		std::string	index;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	truncate_add_space(std::string str);
		void	print_contact_list(void);
		void	display_one(std::string index);
		void	search(void);
		void	add(t_info *c);
};

#endif

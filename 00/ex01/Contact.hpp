/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:12:50 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/23 11:09:17 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "header.hpp"

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	phone_number;
		std::string	darkest_secret;
		std::string	nickname;

	public:
		Contact(void);
		~Contact(void);
		std::string	get_first_name() const;
		std::string	get_nickname() const;
		std::string	get_last_name() const;
		std::string	get_phone_number() const;
		std::string	get_darkest_secret() const;

		void	set_first_name(std::string str);
		void	set_nickname(std::string str);
		void	set_last_name(std::string str);
		void	set_phone_number(std::string str);
		void	set_darkest_secret(std::string str);
};

#endif

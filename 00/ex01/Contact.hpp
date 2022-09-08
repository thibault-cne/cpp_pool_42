/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:12:50 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/08 12:16:53 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <header.h>

class Contact
{
	private:
		std::string	first_name;
		std::string	last_name;
		std::string	phone_number;
		std::string	darkest_secret;
		std::string	nickname;

	public:
		std::string	get_first_name()
		{
			return (first_name);
		}
		std::string	get_nickname()
		{
			return (nickname);
		}
		std::string	get_last_name()
		{
			return (last_name);
		}
		std::string	get_phone_number()
		{
			return (phone_number);
		}
		std::string	get_darkest_secret()
		{
			return (darkest_secret);
		}
		void	set_first_name(std::string str)
		{
			first_name = str;
		}
		void	set_nickname(std::string str)
		{
			nickname = str;
		}
		void	set_last_name(std::string str)
		{
			last_name = str;
		}
		void	set_phone_number(std::string str)
		{
			phone_number = str;
		}
		void	set_darkest_secret(std::string str)
		{
			darkest_secret = str;
		}
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:22:57 by lguillau          #+#    #+#             */
/*   Updated: 2022/09/14 15:49:37 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
# define HEADER_HPP

# include <iostream>

typedef struct	s_info
{
	std::string	last_name;
	std::string	first_name;
	std::string	nickname;
	std::string	darkest_secret;
	std::string	phone_number;
}	t_info;

# include "Contact.hpp"
# include "PhoneBook.hpp"

#endif

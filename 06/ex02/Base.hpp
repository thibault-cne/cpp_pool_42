/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:51:55 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/07 13:09:55 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include "header.hpp"

class Base
{
	public:
		virtual ~Base();
};

	Base	*generate(void);
	void	identify(Base *p);
	void	identify(Base &p);

#endif

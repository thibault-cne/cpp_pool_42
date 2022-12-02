/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <lguillau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:00:01 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/02 12:52:23 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_HPP
#define HEADER_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <limits.h>
# include <cstdlib>

void	convInt(std::string s);
void	convFloat(std::string s);
void	convDouble(std::string s);
void	convChar(std::string s);

bool	isNumber(std::string s);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 10:13:16 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/05 16:39:28 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

# include <iomanip>
# include <iostream>
# include <sstream>
# include "Contact.hpp"
# include "PhoneBook.hpp"

bool	isNumber(std::string str);
bool	isAscii(std::string str);
int		stoi(std::string &s);

#endif
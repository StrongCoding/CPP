/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:40:32 by dnebatz           #+#    #+#             */
/*   Updated: 2024/01/18 12:13:31 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl
{
private:
	
	void		(Harl::*functionPointer[4])();
	void		debug (void);
	void		info (void);
	void		warning (void);
	void		error (void);
	std::string	levels[4];
	
public:
	Harl();
	~Harl();
	void	complain(std::string level);
};

#endif
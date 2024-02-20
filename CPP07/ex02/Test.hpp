/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:57:23 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/20 18:20:38 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_HPP
# define TEST_HPP
#include <iostream>

class Test
{
	private:
		std::string	m_type;
	public:
		Test();
		Test(std::string type);
		~Test();
		Test(Test const &other);
		Test &operator=(Test const &other);
		std::string getType() const;
};

#endif
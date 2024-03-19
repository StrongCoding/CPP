/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 08:13:19 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/19 09:07:52 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <string>
# include <stack>
# include <iostream>
# include <sstream>

class RPN
{
	private:
		double	m_result;
		std::stack<double> m_stack;
		RPN();
	public:	
		RPN(std::string input);
		~RPN();
		RPN(RPN &other);
		RPN &operator=(RPN &other);
};

#endif
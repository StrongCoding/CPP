/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 08:13:08 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/19 09:35:23 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

bool checkInput(std::string input)
{
	int	i;

	i = -1;
	while (input[++i])
	{
		if ((!isdigit(input[i])) && input[i] != '+' && input[i] != '-' && input[i] != '*' && input[i] != '/' && input[i] != ' ')
			return (false);
		
	}
	// wenn es kein digit ist und kein (plus oder minus oder mal oder geteilt)
	return (true);
}

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "please give me just one argument!" << std::endl;
		return (1);
	}
	if (!checkInput(argv[1]))
		{
			std::cout << "please just numbers and + - / and * operations" << std::endl;
			return (1);
		}
	RPN a(argv[1]);
	return (0);
}
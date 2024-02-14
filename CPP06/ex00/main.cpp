/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:12:46 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/14 19:05:24 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	(void)argc;
	if (argc != 2)
	{
		std::cout << "Usage: ./convert [input]" << std::endl;
		return (1);
	}
	ScalarConverter::convert(argv[1]);
	return (0);
}
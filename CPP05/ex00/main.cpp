/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:04:36 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/13 11:01:01 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("A", 150);
	a.decrementGrade();
	a.incrementGrade();
	std::cout << a << std::endl;

	Bureaucrat b("A", 0);
	std::cout << b << std::endl;
	Bureaucrat c("A", 151);
	std::cout << c << std::endl;
	Bureaucrat d("Bjoern");
	std::cout << d << std::endl;

	Bureaucrat e;
	std::cout << e << std::endl;
	
	return (0);
}
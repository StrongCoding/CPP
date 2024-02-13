/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:04:36 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/13 16:03:29 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	std::cout << "construction first Bureaucrat 150" << std::endl;
	Bureaucrat a("A", 150);
	std::cout << "trying to decrement grade" << std::endl;
	a.decrementGrade();
	std::cout << "trying to increment grade" << std::endl;
	a.incrementGrade();
	std::cout << a << std::endl;

	std::cout << "construction second Bureaucrat 0" << std::endl;
	Bureaucrat b("A", 0);
	std::cout << b << std::endl;
	std::cout << "construction third Bureaucrat 151" << std::endl;
	Bureaucrat c("A", 151);
	std::cout << c << std::endl;
	std::cout << "construction fourth Bureaucrat without grade" << std::endl;
	Bureaucrat d("Bjoern");
	std::cout << d << std::endl;
	std::cout << "construction fifth Bureaucrat without grade and name" << std::endl;
	Bureaucrat e;
	std::cout << e << std::endl;
	Bureaucrat f("F", 1);
	std::cout << "construction sixth Bureaucrat with grade 1" << std::endl;
	std::cout << "trying to increment grade" << std::endl;
	f.incrementGrade();
	std::cout << f << std::endl;
	return (0);
}
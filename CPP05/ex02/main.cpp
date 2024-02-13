/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:04:36 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/13 21:28:56 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "\033[1;33mBureaucrat with highest access\033[0m\n" << std::endl;
	Bureaucrat a("A", 1);
	std::cout << "\033[1;32mTrying to execute ShrubberyCreationForm\033[0m\n";
	ShrubberyCreationForm scform1("home1");
	scform1.execute(a);
	a.executeForm(scform1);
	std::cout << "\033[1;32msigning it\033[0m\n";
	a.signForm(scform1);
	scform1.execute(a);
	a.executeForm(scform1);
	std::cout << "\033[1;32mTrying to execute RobotomyRequestForm\033[0m\n";
	RobotomyRequestForm rrform1("home2");
	rrform1.execute(a);
	a.executeForm(rrform1);
	std::cout << "\033[1;32msigning it\033[0m\n";
	a.signForm(rrform1);
	rrform1.execute(a);
	a.executeForm(rrform1);
	std::cout << std::endl;
	std::cout << "\033[1;32mTrying to execute PresidentialPardonForm\033[0m\n";
	PresidentialPardonForm ppform1("home2");
	ppform1.execute(a);
	a.executeForm(ppform1);
	std::cout << "\033[1;32msigning it\033[0m\n";
	a.signForm(ppform1);
	ppform1.execute(a);
	a.executeForm(ppform1);
	std::cout << std::endl;
	std::cout << "\033[1;33mBureaucrat with lowest access\033[0m\n" << std::endl;
	Bureaucrat bca("A", 150);
	std::cout << "\033[1;32mTrying to execute ShrubberyCreationForm\033[0m\n";
	ShrubberyCreationForm scform1("home1");
	scform1.execute(bca);
	bca.executeForm(scform1);
	std::cout << "\033[1;32msigning it\033[0m\n";
	bca.signForm(scform1);
	scform1.execute(bca);
	bca.executeForm(scform1);
	std::cout << "\033[1;32mTrying to execute RobotomyRequestForm\033[0m\n";
	RobotomyRequestForm rrform1("home2");
	rrform1.execute(bca);
	bca.executeForm(rrform1);
	std::cout << "\033[1;32msigning it\033[0m\n";
	bca.signForm(rrform1);
	rrform1.execute(bca);
	bca.executeForm(rrform1);
	std::cout << std::endl;
	std::cout << "\033[1;32mTrying to execute PresidentialPardonForm\033[0m\n";
	PresidentialPardonForm ppform1("home2");
	ppform1.execute(bca);
	bca.executeForm(ppform1);
	std::cout << "\033[1;32msigning it\033[0m\n";
	bca.signForm(ppform1);
	ppform1.execute(bca);
	bca.executeForm(ppform1);
	std::cout << std::endl;
	std::cout << "\033[1;33mBureaucrat with 145 access\033[0m\n" << std::endl;
	// change this value between 
	// ShrubberyCreationForm: Required grades: sign 145, exec 137
	// RobotomyRequestForm: Required grades: sign 72, exec 45
	//PresidentialPardonForm: Required grades: sign 25, exec 5
	Bureaucrat bcb("A", 145);
	std::cout << "\033[1;32mTrying to execute ShrubberyCreationForm\033[0m\n";
	ShrubberyCreationForm scform1("home1");
	scform1.execute(bcb);
	bcb.executeForm(scform1);
	std::cout << "\033[1;32msigning it\033[0m\n";
	bcb.signForm(scform1);
	scform1.execute(bcb);
	bcb.executeForm(scform1);
	std::cout << "\033[1;32mTrying to execute RobotomyRequestForm\033[0m\n";
	RobotomyRequestForm rrform1("home2");
	rrform1.execute(bcb);
	bcb.executeForm(rrform1);
	std::cout << "\033[1;32msigning it\033[0m\n";
	bcb.signForm(rrform1);
	rrform1.execute(bcb);
	bcb.executeForm(rrform1);
	std::cout << std::endl;
	std::cout << "\033[1;32mTrying to execute PresidentialPardonForm\033[0m\n";
	PresidentialPardonForm ppform1("home2");
	ppform1.execute(bcb);
	bcb.executeForm(ppform1);
	std::cout << "\033[1;32msigning it\033[0m\n";
	bcb.signForm(ppform1);
	ppform1.execute(bcb);
	bcb.executeForm(ppform1);
	std::cout << std::endl;
	
	return (0);
}
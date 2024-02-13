/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 19:04:36 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/13 17:46:47 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "\033[1;33mConstructing some Forms\033[0m\n" << std::endl;
	std::cout << "construction first Form 151 151" << std::endl;
	Form fa("FA", 151, 151);
	std::cout << fa << std::endl;
	std::cout << std::endl;
	std::cout << "construction first Form 151 0" << std::endl;
	Form fb("FB", 151, 0);
	std::cout << fb << std::endl;
	std::cout << std::endl;
	std::cout << "construction first Form 0 151" << std::endl;
	Form fc("FC", 0, 151);
	std::cout << fc << std::endl;
	std::cout << std::endl;
	std::cout << "construction first Form 0 0" << std::endl;
	Form fd("FD", 0, 0);
	std::cout << fd << std::endl;
	std::cout << std::endl;
	std::cout << "construction first Form 100 80" << std::endl;
	Form fe("FE", 100, 80);
	std::cout << fe << std::endl;
	std::cout << std::endl;
	std::cout << "construction first Form 99 117" << std::endl;
	Form ff("FF", 99, 117);
	std::cout << ff << std::endl;
	std::cout << std::endl;
	std::cout << "\033[1;33mConstruction a Bureaucrat and trying to sign\033[0m\n" << std::endl;
	std::cout << "construction a Bureaucrat 100" << std::endl;
	Bureaucrat a("A", 100);
	std::cout << a << std::endl;
	std::cout << std::endl;
	std::cout << "A trying to sign form FE" << std::endl;
	std::cout << fe << std::endl;
	a.signForm(fe);
	std::cout << fe << std::endl;
	std::cout << std::endl;
	std::cout << "A trying to sign form FF" << std::endl;
	std::cout << ff << std::endl;
	a.signForm(ff);
	std::cout << ff << std::endl;
	std::cout << std::endl;
	std::cout << "trying to increment grade" << std::endl;
	a.decrementGrade();
	std::cout << a << std::endl;
	std::cout << std::endl;
	std::cout << "A trying to sign form FE" << std::endl;
	a.signForm(fe);
	std::cout << std::endl;
	std::cout << "A trying to sign form FF" << std::endl;
	a.signForm(ff);
	a.incrementGrade();
	a.incrementGrade();
	std::cout << a << std::endl;
	std::cout << std::endl;
	std::cout << "A trying to sign form FE" << std::endl;
	a.signForm(fe);
	std::cout << std::endl;
	std::cout << "A trying to sign form FF" << std::endl;
	a.signForm(ff);
	return (0);
}
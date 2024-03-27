/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 08:13:14 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/27 17:11:25 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(std::string input)
{
	std::stringstream readInput;
	std::string inputContent;
	std::stringstream singleNumber;
	double inputNumber;
	double tempResult;
	double tempNumber;
	readInput << input;
	while (std::getline(readInput, inputContent, ' '))
		{
			
			if (inputContent.size() == 0)
				continue;
			if (inputContent == "+" || inputContent == "-" || inputContent == "/" || inputContent == "*")
				{
				std::cout << "i want to calc: \"" << inputContent << "\"" << std::endl;
				if (m_stack.size() < 2)
				{
					std::cout << "Error: too less numbers or too much operators" << std::endl;
					break;
				}
				tempNumber = m_stack.top();
				m_stack.pop();
				if (inputContent == "+")
					tempResult = m_stack.top() + tempNumber;
				if (inputContent == "-")
					tempResult = m_stack.top() - tempNumber;
				if (inputContent == "*")
					tempResult = m_stack.top() * tempNumber;
				if (inputContent == "/")
					tempResult = m_stack.top() / tempNumber;
				m_stack.pop();
				m_stack.push(tempResult);
				}
			else
			{
				std::cout << "inputchar: \"" << inputContent << "\" added to stack" << std::endl;
				std::stringstream singleNumber(inputContent);
				singleNumber >> inputNumber;
				m_stack.push(inputNumber);
			}
		}
	std::cout << m_stack.top() << std::endl;
}

RPN::~RPN()
{
}

RPN::RPN(RPN &other)
{
	(void)other;
	(void)m_result;
}

RPN &RPN::operator=(RPN &other)
{
	return (other);
}

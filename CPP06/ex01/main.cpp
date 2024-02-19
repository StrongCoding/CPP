/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 08:15:52 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/19 08:16:39 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int main(void)
{
	Data *data = new Data("school", 42);
	uintptr_t raw = Serializer::serialize(data);
	Data *ptr = Serializer::deserialize(raw);
	std::cout << "type: " << ptr->type << std::endl;
	std::cout << "number: " << ptr->number << std::endl;
	delete data;
	return (0);
}
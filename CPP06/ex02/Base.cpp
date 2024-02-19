/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:15:22 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/19 13:38:01 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base()
{
}

Base::Base(const Base &other)
{
	*this = other;
}

Base &Base::operator=(const Base &source)
{
	(void)source;
	return (*this);
}

Base::~Base()
{
}

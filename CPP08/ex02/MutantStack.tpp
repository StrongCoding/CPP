/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:24:03 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/04 15:25:26 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <stack>

template<typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const & other)
{
}

template<typename T>
MutantStack & MutantStack<T>::operator=(MutantStack const & other)
{
	std::cout << "overloaded assignement operator called" << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::~iterator(void)
{
	std::cout << "standard deconstructor iterator called" << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::iterator(void)
{
	std::cout << "standard constructor iterator called" << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::iterator(T *ptr)
{
	std::cout << "standard constructor iterator with param called" << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::iterator(const typename MutantStack<T>::iterator &other)
{
	std::cout << "standard constructor iterator called" << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	typename MutantStack<T>::iterator test;

    return (test);
}

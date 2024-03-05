/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:24:03 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/05 09:36:24 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack &other)
{
	std::cout << "standard copy constructor MutantStack called" << std::endl;
	MutantStack<int>::iterator it = other.begin();
	MutantStack<int>::iterator ite = other.end();
	while (it != ite)
	{
		this->push(*it);
		++it;
	}
	this->push(*it);
}

template<typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> & other)
{
	MutantStack<int> tempStack;
	while (!this->empty())				//emptying old stack
		this->pop();

	MutantStack<int>::iterator it = other.begin();
	MutantStack<int>::iterator ite = other.end();
	while (it != ite)
	{
		this->push(*it);
		++it;
	}
	this->push(*it);
	return (*this);
}

template <typename T>
MutantStack<T>::iterator::~iterator()
{
	std::cout << "standard deconstructor iterator called" << std::endl;
}

template <typename T>
MutantStack<T>::iterator::iterator() : m_ptr(NULL)
{
	std::cout << "standard constructor iterator called" << std::endl;
}

template <typename T>
MutantStack<T>::iterator::iterator(T *ptr) : m_ptr(ptr)
{
	std::cout << "standard constructor iterator with param called" << std::endl;
}


template <typename T>
MutantStack<T>::iterator::iterator(const typename MutantStack<T>::iterator &other) : m_ptr(other.m_ptr)
{
	std::cout << "standard constructor iterator called" << std::endl;
}

template <typename T>
typename MutantStack<T>::iterator &MutantStack<T>::iterator::operator=(const typename MutantStack<T>::iterator &other)
{
	if (*this != other)
	{
		m_ptr = other.m_ptr;
	}
	std::cout << "overloaded assignment operator iterator called" << std::endl;
	return (*this);
}

template <typename T>
bool MutantStack<T>::iterator::operator!=(const typename MutantStack<T>::iterator &other)
{
	if (m_ptr == other.m_ptr)
		return (false);
	return (true);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
	return iterator(&this->top());
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
	 return iterator((&this->top()) - this->size() + 1);
}

template <typename T>
void MutantStack<T>::iterator::operator++(void)
{
	m_ptr++;
}

template <typename T>
void MutantStack<T>::iterator::operator--(void)
{
	m_ptr--;
}

template <typename T>
T MutantStack<T>::iterator::operator*(void)
{
	return (*m_ptr);
}
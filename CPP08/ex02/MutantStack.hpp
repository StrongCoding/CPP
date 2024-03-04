/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 20:22:43 by dnebatz           #+#    #+#             */
/*   Updated: 2024/03/04 15:44:36 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <stack>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	private:
	
	public:
		MutantStack();
		~MutantStack();
		MutantStack(MutantStack const &other);
		MutantStack &operator=(MutantStack const &other);
		
		class iterator
		{
			private:
				T	*ptr;
				
			public:
				iterator();
				iterator(T *ptr);
				~iterator();
				iterator(iterator const &other);
				iterator &operator=(iterator const &other);
				T &operator*(void);
				iterator &operator++(void);
				iterator &operator--(void);
		};
		typename MutantStack<T>::iterator begin(void);
		typename MutantStack<T>::iterator end(void);
};

# include "MutantStack.tpp"

#endif

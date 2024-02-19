/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 09:15:19 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/19 09:31:35 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include <cstdlib>

class Base
{
	private:
		

	public:
		Base();
		Base(const Base &other);
		Base &operator=(const Base &source);
		virtual ~Base();
		Base *generate(void);
		void identify(Base* p);
		void identify(Base& p);
};

#endif
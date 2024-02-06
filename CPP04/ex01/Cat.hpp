/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:17:59 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/06 09:14:44 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *m_brain;
	public:
		Cat();
		~Cat();
		Cat(const Cat &copy);
		Cat &operator =(const Cat &source);
		void makeSound(void) const;
};

#endif

/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   Dog.hpp											:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/02/02 10:34:58 by dnebatz		   #+#	#+#			 */
/*   Updated: 2024/02/02 10:34:58 by dnebatz		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "AbstractAnimal.hpp"
# include "Brain.hpp"

class Dog : public AbstractAnimal
{
	private:
		Brain *m_brain;
	public:
		Dog();
		~Dog();
		Dog(const Dog &copy);
		Dog &operator =(const Dog &source);
		void	makeSound(void) const;
};

#endif
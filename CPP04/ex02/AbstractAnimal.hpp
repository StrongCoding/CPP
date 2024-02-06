/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   AbstractAnimal.hpp										 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/02/02 10:35:41 by dnebatz		   #+#	#+#			 */
/*   Updated: 2024/02/02 10:35:41 by dnebatz		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#ifndef ABSTRACTANIMAL_HPP
# define ABSTRACTANIMAL_HPP
# include <iostream>

class AbstractAnimal
{
	protected:
		std::string m_type;
	
	public:
		AbstractAnimal();
		AbstractAnimal(std::string type);
		virtual ~AbstractAnimal();
		AbstractAnimal &operator =(const AbstractAnimal &source);
		AbstractAnimal(const AbstractAnimal &copy);

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};

#endif
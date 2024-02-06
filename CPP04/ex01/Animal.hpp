/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   Animal.hpp										 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de	+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/02/02 10:35:41 by dnebatz		   #+#	#+#			 */
/*   Updated: 2024/02/02 10:35:41 by dnebatz		  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string m_type;
	
	public:
		Animal();
		Animal(std::string type);
		virtual ~Animal();
		Animal &operator =(const Animal &source);
		Animal(const Animal &copy);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif
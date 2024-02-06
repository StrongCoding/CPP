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

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	protected:
		std::string m_type;
	
	public:
		WrongAnimal();
		WrongAnimal(std::string type);
		~WrongAnimal();
		WrongAnimal &operator =(const WrongAnimal &source);
		WrongAnimal(const WrongAnimal &copy);

		void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ground.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 09:21:39 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/12 10:02:55 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GROUND_HPP
# define GROUND_HPP
# include <iostream>
# include "AMateria.hpp"

class AMateria;

class Ground
{
	private:
		AMateria*		m_groudMaterias[4];
		unsigned int	m_countGroundMaterias;

	public:
		Ground();
		~Ground();
		Ground(Ground &source);
		Ground &operator =(Ground &source);
		void setGround(AMateria* newGroundMateria);
		void showGroundMateria(void);
};

#endif


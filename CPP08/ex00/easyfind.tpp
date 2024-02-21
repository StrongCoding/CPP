/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnebatz <dnebatz@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 08:23:42 by dnebatz           #+#    #+#             */
/*   Updated: 2024/02/21 15:11:28 by dnebatz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
typename T::iterator easyfind(T &source, int toFind)
{
	typename T::iterator i = std::find(source.begin(), source.end(), toFind);
	if (i != source.end())
	{
		std::cout << "found: " << *i << std::endl;
		return (i);
	}
		
	throw std::exception();
}

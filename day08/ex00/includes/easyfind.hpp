/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   easyfind.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/06 13:28:38 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 13:28:38 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <algorithm>
# include <exception>

template<typename T>
int					easyfind(T &obj, int value)
{
	typename T::iterator iterator = std::find(obj.begin(), obj.end(), value);

	if (iterator == obj.end())
		throw std::exception();

	return (*iterator);
}


#endif //EASYFIND_HPP

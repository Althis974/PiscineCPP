/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   IMateriaSource.hpp                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:28:05 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 15:28:05 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{

public:

	virtual ~IMateriaSource() {}
	virtual void        learnMateria(AMateria*) = 0;
	virtual AMateria *	createMateria(const std::string &type) = 0;
};


#endif //IMATERIASOURCE_HPP

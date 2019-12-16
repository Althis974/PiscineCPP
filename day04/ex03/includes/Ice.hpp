/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Ice.hpp                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:27:24 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 15:27:24 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{

public:

	// Constructor
	Ice();

	// Copy constructor
	Ice(const Ice &src);

	// Destructor
	virtual ~Ice();

	// Assignation operator overload
	Ice	&			operator=(const Ice &rhs);

	// Returns a new instance of materia
	AMateria		*clone() const;

	// Use materia and increase xp
	virtual void	use(ICharacter &target);
};

#endif //ICE_HPP

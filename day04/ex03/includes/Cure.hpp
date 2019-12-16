/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Cure.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:27:10 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 15:27:10 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{

public:

	// Constructor
	Cure();

	// Copy constructor
	Cure(const Cure &src);

	// Destructor
	virtual ~Cure();

	// Assignation operator overload
	Cure &			operator=(const Cure &rhs);

	// Returns a new instance of materia
	AMateria *		clone() const;

	// Use materia and increase xp
	virtual void	use(ICharacter &target);
};


#endif //CURE_HPP

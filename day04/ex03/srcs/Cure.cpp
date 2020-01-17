/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Cure.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:26:58 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 15:26:58 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

// Constructor

Cure::Cure() : AMateria("cure")
{

}

// Copy constructor

Cure::Cure(const Cure &src) : AMateria(src)
{

}

// Destructor

Cure::~Cure()
{

}

// Assignation operator overload

Cure &			Cure::operator=(const Cure &rhs)
{
	AMateria::operator=(rhs);

	return (*this);
}

// Returns a new instance of materia

AMateria *		Cure::clone() const
{
	return (new Cure());
}

// Use materia and increase xp

void			Cure::use(ICharacter &target)
{
	AMateria::use(target);

	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
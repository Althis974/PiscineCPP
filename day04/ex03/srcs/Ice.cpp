/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Ice.cpp                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:25:37 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 15:25:37 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

// Constructor

Ice::Ice() : AMateria("ice")
{

}

// Copy constructor

Ice::Ice(const Ice &src) : AMateria(src)
{

}

// Destructor

Ice::~Ice()
{

}

// Assignation operator overload

Ice &			Ice::operator=(const Ice &rhs)
{
	AMateria::operator=(rhs);

	return (*this);
}

// Returns a new instance of materia

AMateria *		Ice::clone() const
{
	return (new Ice());
}

// Use materia and increase xp

void			Ice::use(ICharacter &target)
{
	AMateria::use(target);

	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
			  << std::endl;
}
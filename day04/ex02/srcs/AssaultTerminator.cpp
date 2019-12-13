/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AssaultTerminator.cpp                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 09:58:17 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 09:58:17 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/AssaultTerminator.hpp"

// Constructor

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

// Copy constructor

AssaultTerminator::AssaultTerminator(const AssaultTerminator &src)
{
	*this = src;

	std::cout << "* teleports from space *" << std::endl;
}

// Destructor

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ..." << std::endl;
}

// Assignation operator overload

AssaultTerminator &		AssaultTerminator::operator=(AssaultTerminator const &rhs)
{
	(void)rhs;

	return (*this);
}

// Return copy of current object

ISpaceMarine			*AssaultTerminator::clone() const
{
	ISpaceMarine	*clone = new AssaultTerminator(*this);

	return (clone);
}

// Say something nice

void					AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

// Ranged attack

void					AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
}

// Melee attack

void					AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
}
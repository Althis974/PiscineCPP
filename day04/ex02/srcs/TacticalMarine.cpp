/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   TacticalMarine.cpp                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 09:57:42 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 09:57:42 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/TacticalMarine.hpp"

// Constructor

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

// Copy constructor

TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
	*this = src;
	std::cout << "Tactical Marine ready for battle" << std::endl;
}

// Destructor

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
}

// Assigantion operator overload

TacticalMarine &TacticalMarine::operator=(TacticalMarine const &r)
{
	(void)r;

	return (*this);
}

// Return copy of current object

ISpaceMarine	*TacticalMarine::clone() const
{
	ISpaceMarine	*clone = new TacticalMarine(*this);

	return (clone);
}

// Say something nice

void			TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

// Ranged attack

void			TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

// Melee attack

void			TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}
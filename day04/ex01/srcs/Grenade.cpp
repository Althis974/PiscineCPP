/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Grenade.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 17:28:00 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 17:28:00 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Grenade.hpp"

// Constructor

Grenade::Grenade() : AWeapon("Grenade", 20, 100)
{

}

// Copy constructor

Grenade::Grenade(const Grenade &src) : AWeapon(src)
{

}

// Destructor

Grenade::~Grenade()
{

}

// Assignation operator overload

Grenade &			Grenade::operator=(const Grenade &rhs)
{
	AWeapon::operator=(rhs);

	return (*this);
}

// Attack

void	Grenade::attack() const
{
	std::cout << "* clingk... KABOUUUUUUM! *" << std::endl;
}
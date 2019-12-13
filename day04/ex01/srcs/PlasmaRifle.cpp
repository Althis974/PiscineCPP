/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PlasmaRifle.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 14:22:15 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 14:22:15 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/PlasmaRifle.hpp"

// Constructor

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{

}

// Copy constructor

PlasmaRifle::PlasmaRifle(const PlasmaRifle &src) : AWeapon(src)
{

}

// Destructor

PlasmaRifle::~PlasmaRifle()
{

}

// Assignation operator overload

PlasmaRifle &		PlasmaRifle::operator=(const PlasmaRifle &rhs)
{
	AWeapon::operator=(rhs);

	return (*this);
}

// Attack

void				PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
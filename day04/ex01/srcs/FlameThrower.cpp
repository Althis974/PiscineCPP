/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   FlameThrower.cpp                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 17:24:05 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 17:24:05 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/FlameThrower.hpp"

// Constructor

FlameThrower::FlameThrower() : AWeapon("FlameThrower", 15, 75)
{

}

// Copy constructor

FlameThrower::FlameThrower(const FlameThrower &obj) : AWeapon(obj)
{

}

// Destructor

FlameThrower::~FlameThrower()
{

}

// Assignation operator overload

FlameThrower &			FlameThrower::operator=(FlameThrower const &rhs)
{
	AWeapon::operator=(rhs);

	return (*this);
}

// Attack

void	FlameThrower::attack() const
{
	std::cout << "* shhhhhrrhrhrhrbrhrbrhbrhrh *" << std::endl;
}
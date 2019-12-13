/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PowerFist.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 14:37:24 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 14:37:24 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/PowerFist.hpp"

// Constructor

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{

}

// Copy constructor

PowerFist::PowerFist(const PowerFist &obj) : AWeapon(obj)
{

}

// Destructor

PowerFist::~PowerFist()
{

}

// Assignation operator overload

PowerFist &			PowerFist::operator=(PowerFist const &rhs)
{
	AWeapon::operator=(rhs);

	return (*this);
}

// Attack

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
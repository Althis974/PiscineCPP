/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HumanB.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 17:00:25 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/03 17:00:25 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

// Constructor

HumanB::HumanB(std::string const &name) : _name(name)
{

}

// Destructor

HumanB::~HumanB()
{

}

// Setter

void	HumanB::setWeapon(Weapon &w)
{
	this->_weapon = &w;
}

// Attack

void	HumanB::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType()
			  << std::endl;
}
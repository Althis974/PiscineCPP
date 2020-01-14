/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Weapon.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 17:00:01 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/03 17:00:01 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

// Constructor

Weapon::Weapon(const std::string &type) : _type(type)
{

}

// Destructor

Weapon::~Weapon()
{

}

// Setter

void			Weapon::setType(const std::string &type)
{
	this->_type = type;
}

// Getter

std::string		Weapon::getType() const
{
	return (this->_type);
}

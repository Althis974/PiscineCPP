/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AWeapon.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 13:44:55 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 13:44:55 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/AWeapon.hpp"

// Constructors

AWeapon::AWeapon()
{

}

AWeapon::AWeapon(const std::string &name, int APCost, int damage) :
		_name(name), _APCost(APCost), _damage(damage)
{

}

// Copy constructor

AWeapon::AWeapon(const AWeapon &src) : _name(src._name), _APCost(src._APCost),
									   _damage(src._damage)
{

}

// Destructor

AWeapon::~AWeapon()
{

}

// Assignation operator overload

AWeapon &			AWeapon::operator=(const AWeapon &rhs)
{
	this->_damage = rhs._damage;
	this->_APCost = rhs._APCost;
	this->_name = rhs._name;

	return (*this);
}

// Getters

std::string			AWeapon::getName() const
{
	return (this->_name);
}

int					AWeapon::getAPCost() const
{
	return (this->_APCost);
}

int					AWeapon::getDamage() const
{
	return (this->_damage);
}
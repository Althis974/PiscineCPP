/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Character.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 15:49:48 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 15:49:48 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Character.hpp"

// Constructors

Character::Character(const std::string &name) : _name(name), _AP(40),
						_weapon(nullptr)
{

}

// Copy constructor

Character::Character(const Character &src) : _name(src._name), _AP(src._AP),
						_weapon(src._weapon)
{

}

// Destructor

Character::~Character()
{

}

// Assignation operator overload

Character &			Character::operator=(const Character &rhs)
{
	this->_name = rhs._name;
	this->_AP = rhs._AP;
	this->_weapon = rhs._weapon;

	return (*this);
}

// Getters

std::string			Character::getName() const
{
	return (this->_name);
}

int 				Character::getAP() const
{
	return (this->_AP);
}

AWeapon *			Character::getWeapon() const
{
	return (this->_weapon);
}

// Recover AP

void				Character::recoverAP()
{
	this->_AP + 10 > 40 ? this->_AP = 40 : this->_AP += 10;
}

// Equip weapon

void				Character::equip(AWeapon *weapon)
{
	this->_weapon = weapon;
}

// Attack

void				Character::attack(Enemy *enemy)
{
	if (this->_weapon != nullptr && enemy != nullptr)
	{
		if (this->_AP - this->_weapon->getAPCost() >= 0)
		{
			std::cout << this->_name << " attacks " << enemy->getType()
					  << " with a " << this->_weapon->getName() << std::endl;

			this->_weapon->attack();
			this->_AP -= this->_weapon->getAPCost();

			enemy->takeDamage(this->_weapon->getDamage());

			if (enemy->getHP() <= 0)
				delete enemy;
		}
	}
}

// Insertion operator overload

std::ostream &		operator<<(std::ostream &out, const Character &rhs)
{
	if (rhs.getWeapon())
		out << rhs.getName() << " has " << rhs.getAP() << " AP and wields a "
			<< rhs.getWeapon()->getName() << std::endl;
	else
		out << rhs.getName() << " has " << rhs.getAP() << " AP and is unarmed"
			<< std::endl;

	return (out);
}


/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Character.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:27:02 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 15:27:02 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Character.hpp"

// Constructors

Character::Character() : _name("Jack"), _index(0)
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = nullptr;
}

Character::Character(const std::string &name) : _name(name), _index(0)
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = nullptr;
}

// Copy constructor

Character::Character(const Character &src) : _name(src._name),
						_index(src._index)
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = src._inventory[i];
}

// Destructor

Character::~Character()
{

}

// Assignation operator overload

Character &				Character::operator=(const Character &rhs)
{
	this->_name = rhs._name;
	this->_index = rhs._index;
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = rhs._inventory[i]->clone();

	return (*this);
}

// Getter

const std::string &		Character::getName() const
{
	return (this->_name);
}

// Equip a materia

void					Character::equip(AMateria *materia)
{
	if (this->_index < 3)
	{
		this->_inventory[this->_index] = materia;
		this->_index++;
	}
}

// Unequip materia but doest't destroy it

void					Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->_inventory[idx] = nullptr;
}

// Use a materia

void					Character::use(int idx, ICharacter &target)
{
	if (idx < this->_index)
		this->_inventory[idx]->use(target);
}
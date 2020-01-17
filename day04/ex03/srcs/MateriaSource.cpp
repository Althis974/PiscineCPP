/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   MateriaSource.cpp                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:27:05 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 15:27:05 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"


// Constructor

MateriaSource::MateriaSource() : _index(0)
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = nullptr;
}

// Copy constructor

MateriaSource::MateriaSource(const MateriaSource &src) : _index(src._index)
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = src._inventory[i];
}

// Destructor

MateriaSource::~MateriaSource()
{

}

// Assignation operator overload

MateriaSource &			MateriaSource::operator=(const MateriaSource &rhs)
{
	this->_index = rhs._index;
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = rhs._inventory[0]->clone();

	return (*this);
}

// Learn a materia

void					MateriaSource::learnMateria(AMateria *materia)
{
	if (this->_index < 4)
	{
		this->_inventory[this->_index] = materia;
		this->_index++;
	}
}

// Create a materia

AMateria *				MateriaSource::createMateria(const std::string &type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());

	return (nullptr);
}
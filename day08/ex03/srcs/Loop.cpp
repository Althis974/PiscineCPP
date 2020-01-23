/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Loop.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 15:21:42 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 15:21:42 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Loop.hpp"

// Constructor

Loop::Loop(Container *container, const std::vector<AInstructions*> &vector) :
			AInstructions(container), _vector(vector)
{

}

// Copy constructor

Loop::Loop(const Loop &src) : AInstructions(src), _vector(src._vector)
{

}

// Destructor

Loop::~Loop()
{
	for (size_t i = 0; i < this->_vector.size(); ++i)
		delete this->_vector[i];
}

// Assignation operator overload

Loop &				Loop::operator=(const Loop &rhs)
{
	AInstructions::operator=(rhs);
	this->_vector = rhs._vector;

	return (*this);
}

void				Loop::execute()
{
	if (!(*this->_container->getCell()))
		return;

	for (std::vector<AInstructions*>::iterator it = this->_vector.begin();
			it != this->_vector.end(); ++it)
	{
		(*it)->execute();
	}

	this->execute();
}
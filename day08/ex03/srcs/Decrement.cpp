/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Decrement.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 14:52:17 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 14:52:17 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Decrement.hpp"

// Constructor

Decrement::Decrement(Container *container) : AInstructions(container)
{

}

// Copy constructor

Decrement::Decrement(const Decrement &src) : AInstructions(src)
{

}

// Destructor

Decrement::~Decrement()
{

}

// Assignation operator overload

Decrement &Decrement::operator=(const Decrement &rhs)
{
	AInstructions::operator=(rhs);

	return (*this);
}

// Execute instructions

void Decrement::execute()
{
	this->_container->decrement();
}
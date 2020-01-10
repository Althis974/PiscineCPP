/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Increment.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 14:45:08 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 14:45:08 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Increment.hpp"

// Constructor

Increment::Increment(Container *container) : AInstructions(container)
{

}

// Copy constructor

Increment::Increment(const Increment &src) : AInstructions(src)
{

}

// Destructor

Increment::~Increment()
{

}

// Assignation operator overload

Increment &				Increment::operator=(const Increment &rhs)
{
	AInstructions::operator=(rhs);

	return (*this);
}

// Execute instructions

void					Increment::execute()
{
	this->_container->increment();
}
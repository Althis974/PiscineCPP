/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Read.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 15:10:54 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 15:10:54 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Read.hpp"

// Constructor

Read::Read(Container *container) : AInstructions(container)
{

}

// Copy constructor

Read::Read(const Read &src) : AInstructions(src)
{

}

// Destructor

Read::~Read()
{

}

// Assignation operator overload

Read &					Read::operator=(const Read &rhs)
{
	AInstructions::operator=(rhs);

	return (*this);
}

// Execute instructions

void					Read::execute()
{
	this->_container->read();
}
/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Write.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 15:05:15 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 15:05:15 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Write.hpp"

// Constructor

Write::Write(Container *container) : AInstructions(container)
{

}

// Copy constructor

Write::Write(const Write &src) : AInstructions(src)
{

}

// Destructor

Write::~Write()
{

}

// Assignation operator overload

Write &				Write::operator=(const Write &rhs)
{
	AInstructions::operator=(rhs);

	return (*this);
}

// Execute instructions

void				Write::execute()
{
	this->_container->write();
}
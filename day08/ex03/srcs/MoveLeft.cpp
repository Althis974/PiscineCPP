/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   MoveLeft.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 14:38:02 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 14:38:02 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/MoveLeft.hpp"

// Constructor

MoveLeft::MoveLeft(Container *container) : AInstructions(container)
{

}

// Copy constructor

MoveLeft::MoveLeft(const MoveLeft &src) : AInstructions(src)
{

}

// Destructor

MoveLeft::~MoveLeft()
{

}

// Assignation operator overload

MoveLeft &		MoveLeft::operator=(const MoveLeft &rhs)
{
	AInstructions::operator=(rhs);

	return (*this);
}

// Execute instructions

void			MoveLeft::execute()
{
	this->_container->moveLeft();
}
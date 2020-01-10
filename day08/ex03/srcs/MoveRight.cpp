/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   MoveRight.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 14:26:57 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 14:26:57 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/MoveRight.hpp"

// Constructor

MoveRight::MoveRight(Container *container) : AInstructions(container)
{

}

// Copy constructor

MoveRight::MoveRight(const MoveRight &src) : AInstructions(src)
{

}

// Destructor

MoveRight::~MoveRight()
{

}

// Assignation operator overload

MoveRight &				MoveRight::operator=(const MoveRight &rhs)
{
	AInstructions::operator=(rhs);

	return (*this);
}

// Execute instructions

void					MoveRight::execute()
{
	this->_container->moveRight();
}
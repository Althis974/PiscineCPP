/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AInstructions.cpp                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 11:14:29 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 11:14:29 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/AInstructions.hpp"

// Constructors

AInstructions::AInstructions() : _container(nullptr)
{

}

AInstructions::AInstructions(Container *container) : _container(container)
{

}

// Copy constructor

AInstructions::AInstructions(const AInstructions &src) :
							_container(src._container)
{

}

// Destructor

AInstructions::~AInstructions()
{

}

// Assignation operator overload

AInstructions &			AInstructions::operator=(const AInstructions &rhs)
{
	this->_container = rhs._container;

	return (*this);
}

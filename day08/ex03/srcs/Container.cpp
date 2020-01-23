/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Container.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 11:00:20 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 11:00:20 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Container.hpp"

const int Container::_size = 30000;

// Constructor

Container::Container() : _memory(new char[Container::_size]()), _position(0)
{

}

// Copy constructor

Container::Container(Container const &src) : _memory(src._memory),
											 _position(src._position)
{

}

// Destructor

Container::~Container()
{
	delete [] this->_memory;
}

// Assignation operator overload

Container &				Container::operator=(const Container &rhs)
{
	*this->_memory = *rhs._memory;

	return (*this);
}

char *					Container::getCell()
{
	return (this->_memory + this->_position);
}

// > : increment the data pointer (to point to the next cell to the right)

void					Container::moveRight()
{
	this->_position++;

	if (this->_position >= Container::_size)
		this->_position = 0;
}

// < : decrement the data pointer (to point to the next cell to the left)

void					Container::moveLeft()
{
	this->_position--;

	if (this->_position < 0)
		this->_position = Container::_size - 1;

}

// + : increment (increase by one) the byte at the data pointer

void					Container::increment()
{
	*this->getCell() += 1;
}

// - : decrement (decrease by one) the byte at the data pointer

void					Container::decrement()
{
	*this->getCell() -= 1;
}

// . : output the byte at the data pointer

void					Container::write()
{
	std::cout << *this->getCell();
	std::cout.flush();
}

// , : accept one byte of input, storing its value in the byte
// at the data pointer

void					Container::read()
{
	std::cin >> *this->getCell();
}
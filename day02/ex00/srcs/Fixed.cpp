/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 14:39:33 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/06 14:39:33 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

const int Fixed::_fractionalBitsNb = 8;

// Constructor

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// Copy constructor

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;

	Fixed::operator=(src);
}

// Destructor

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Assignation operator overload

Fixed &		Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_value = rhs.getRawBits();

	return (*this);
}

// Setter

void		Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;

	this->_value = raw;
}

// Getter

int			Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;

	return (this->_value);
}
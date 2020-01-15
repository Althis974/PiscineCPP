/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 15:05:42 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/06 15:05:42 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

const int Fixed::_fractionalBitsNb = 8;

// Constructors

Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;

	this->_value = value << Fixed::_fractionalBitsNb;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;

	this->_value = (int)roundf(value * (1 << Fixed::_fractionalBitsNb));
}

// Copy constructor

Fixed::Fixed(const Fixed &src)
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

Fixed &				Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_value = rhs.getRawBits();

	return (*this);
}

// Setter

void				Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;

	this->_value = raw;
}

// Getter

int					Fixed::getRawBits() const
{
	return (this->_value);
}

// Convert value to float

float				Fixed::toFloat() const
{
	return (this->_value / (float)(1 << Fixed::_fractionalBitsNb));
}

// Convert value to int

int					Fixed::toInt() const
{
	return (this->_value >> Fixed::_fractionalBitsNb);
}

// Insertion operator overload

std::ostream &		operator<<(std::ostream &out, const Fixed &rhs)
{
	out << rhs.toFloat();

	return (out);
}
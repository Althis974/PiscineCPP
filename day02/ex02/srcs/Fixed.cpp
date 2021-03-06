/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 15:56:49 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/06 15:56:49 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

const int Fixed::_fractionalBitsNb = 8;

// Constructors

Fixed::Fixed() : _value(0)
{

}

Fixed::Fixed(const int value)
{
	this->_value = value << Fixed::_fractionalBitsNb;
}

Fixed::Fixed(const float value)
{
	this->_value = (int)roundf(value * (1 << Fixed::_fractionalBitsNb));
}

// Copy constructor

Fixed::Fixed(const Fixed &src)
{
	Fixed::operator=(src);
}

// Destructor

Fixed::~Fixed()
{

}

// Assignation operator overload

Fixed &				Fixed::operator=(const Fixed &rhs)
{
	this->_value = rhs.getRawBits();

	return (*this);
}

// Comparison operators overload

bool				Fixed::operator>(const Fixed &rhs) const
{
	return (this->_value > rhs.getRawBits());
}

bool				Fixed::operator<(const Fixed &rhs) const
{
	return (this->_value < rhs.getRawBits());
}

bool 				Fixed::operator>=(const Fixed &rhs) const
{
	return (this->_value >= rhs.getRawBits());
}

bool 				Fixed::operator<=(const Fixed &rhs) const
{
	return (this->_value <= rhs.getRawBits());
}

bool 				Fixed::operator==(const Fixed &rhs) const
{
	return (this->_value == rhs.getRawBits());
}

bool 				Fixed::operator!=(const Fixed &rhs) const
{
	return (this->_value != rhs.getRawBits());
}

// Arithmetic operators overload

Fixed				Fixed::operator+(const Fixed &rhs)
{
	return (this->toFloat() + rhs.toFloat());
}

Fixed				Fixed::operator-(const Fixed &rhs)
{
	return (this->toFloat()- rhs.toFloat());
}

Fixed				Fixed::operator*(const Fixed &rhs)
{
	return (this->toFloat() * rhs.toFloat());
}

Fixed				Fixed::operator/(const Fixed &rhs)
{
	return (this->toFloat() / rhs.toFloat());
}

// Increment operators overload

Fixed &				Fixed::operator++()
{
	this->_value++;

	return (*this);
}

Fixed				Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();

	return (tmp);
}

// Decrement operators overload

Fixed &				Fixed::operator--()
{
	this->_value--;

	return (*this);
}

Fixed				Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();

	return (tmp);
}

// Setter

void				Fixed::setRawBits(const int raw)
{
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

// Returns reference to the smallest value

Fixed &				Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

// Function min overload

const Fixed &		Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

// Returns reference to the biggest value

Fixed &				Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

// Function max overload

const Fixed &		Fixed::max(Fixed const &a, Fixed const &b)
{
	return (a > b ? a : b);
}

// Insertion operator overload

std::ostream &		operator<<(std::ostream &out, const Fixed &rhs)
{
	out << rhs.toFloat();

	return (out);
}
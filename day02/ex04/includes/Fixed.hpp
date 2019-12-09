/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 16:55:04 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/06 16:55:04 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{

public:

	// Constructors
	Fixed();
	Fixed(int value);
	Fixed(float value);

	// Copy constructor
	Fixed(Fixed const &src);

	// Destructor
	~Fixed();

	// Assignation operator overload
	Fixed &					operator=(Fixed const &rhs);

	// Comparison operators overload
	bool					operator>(Fixed const &rhs) const;
	bool					operator<(Fixed const &rhs) const;
	bool					operator>=(Fixed const &rhs) const;
	bool					operator<=(Fixed const &rhs) const;
	bool					operator==(Fixed const &rhs) const;
	bool					operator!=(Fixed const &rhs) const;

	// Arithmetic operators overload
	Fixed					operator+(Fixed const &rhs);
	Fixed					operator-(Fixed const &rhs);
	Fixed					operator*(Fixed const &rhs);
	Fixed					operator/(Fixed const &rhs);

	// Increment operators overload
	Fixed &					operator++();
	Fixed					operator++(int);

	// Decrement operators overload
	Fixed &					operator--();
	Fixed					operator--(int);

	// Getter
	int						getRawBits() const;

	// Convert value to float
	float					toFloat() const;

	// Convert value to int
	int						toInt() const;

	// Returns reference to the smallest value
	static Fixed &			min(Fixed &a, Fixed &b);

	// Function min overload
	static const Fixed &	min(Fixed const &a, Fixed const &b);

	// Returns reference to the biggest value
	static Fixed &			max(Fixed &a, Fixed &b);

	// Function max overload
	static const Fixed &	max(Fixed const &a, Fixed const &b);

private:

	int						_value;
	static const int		_fractionalBitsNb;

};

// Insertion operator overload
std::ostream &				operator<<(std::ostream &o, Fixed const &rhs);

#endif //FIXED_HPP

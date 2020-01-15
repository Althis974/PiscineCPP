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
	Fixed(const int value);
	Fixed(const float value);

	// Copy constructor
	Fixed(const Fixed &src);

	// Destructor
	~Fixed();

	// Assignation operator overload
	Fixed &					operator=(const Fixed &rhs);

	// Comparison operators overload
	bool					operator>(const Fixed &rhs) const;
	bool					operator<(const Fixed &rhs) const;
	bool					operator>=(const Fixed &rhs) const;
	bool					operator<=(const Fixed &rhs) const;
	bool					operator==(const Fixed &rhs) const;
	bool					operator!=(const Fixed &rhs) const;

	// Arithmetic operators overload
	Fixed					operator+(const Fixed &rhs);
	Fixed					operator-(const Fixed &rhs);
	Fixed					operator*(const Fixed &rhs);
	Fixed					operator/(const Fixed &rhs);

	// Increment operators overload
	Fixed &					operator++();
	Fixed					operator++(int);

	// Decrement operators overload
	Fixed &					operator--();
	Fixed					operator--(int);

	// Setter
	void					setRawBits(const int raw);

	// Getter
	int						getRawBits() const;

	// Convert value to float
	float					toFloat() const;

	// Convert value to int
	int						toInt() const;

	// Returns reference to the smallest value
	static Fixed &			min(Fixed &a, Fixed &b);

	// Function min overload
	static const Fixed &	min(const Fixed &a, const Fixed &b);

	// Returns reference to the biggest value
	static Fixed &			max(Fixed &a, Fixed &b);

	// Function max overload
	static const Fixed &	max(const Fixed &a, const Fixed &b);

private:

	int						_value;
	static const int		_fractionalBitsNb;

};

// Insertion operator overload
std::ostream &				operator<<(std::ostream &out, const Fixed &rhs);

#endif //FIXED_HPP

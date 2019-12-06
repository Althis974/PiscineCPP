/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 15:06:04 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/06 15:06:04 by rlossy      ###    #+. /#+    ###.fr     */
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
	Fixed(int const value);
	Fixed(float const value);

	// Copy constructor
	Fixed(Fixed const &src);

	// Destructor
	~Fixed();

	// Assignation operator overload
	Fixed &				operator=(Fixed const &rhs);

	// Getter
	int					getRawBits() const;

	// Convert value to float
	float				toFloat() const;

	// Convert value to int
	int					toInt() const;

private:

	int					_value;
	static const int	_fractionalBitsNb;
};

// Insertion operator overload
std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif //FIXED_HPP

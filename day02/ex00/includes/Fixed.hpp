/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Fixed.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/06 14:39:37 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/06 14:39:37 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{

public:

	// Constructor
	Fixed();

	// Copy constructor
	Fixed(Fixed const &src);

	// Destructor
	~Fixed();

	// Assignation operator overload
	Fixed &				operator=(Fixed const &rhs);

	// Getter
	int					getRawBits() const;

private:

	int					_value;
	static const int	_fractionalBitsNb;
};


#endif //FIXED_HPP

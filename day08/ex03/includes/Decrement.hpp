/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Decrement.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 14:52:20 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 14:52:20 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef DECREMENT_HPP
#define DECREMENT_HPP


#include "AInstructions.hpp"

class Decrement : public AInstructions
{
	
public:

	// Constructor
	Decrement(Container *container);

	// Copy constructor
	Decrement(const Decrement &src);

	// Destructor
	virtual ~Decrement();

	// Assignation operator overload
	Decrement &			operator=(const Decrement &rhs);

	// Execute instructions
	void				execute();
};


#endif //DECREMENT_HPP

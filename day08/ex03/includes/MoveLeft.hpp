/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   MoveLeft.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 14:38:05 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 14:38:05 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef MOVELEFT_HPP
#define MOVELEFT_HPP

#include "AInstructions.hpp"

class MoveLeft : public AInstructions
{

public:

	// Constructor
	MoveLeft(Container *container);

	// Copy constructor
	MoveLeft(const MoveLeft &src);

	// Destructor
	virtual ~MoveLeft();

	// Assignation operator overload
	MoveLeft &			operator=(const MoveLeft &rhs);

	// Execute instructions
	void				execute();
};


#endif //MOVELEFT_HPP

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   MoveRight.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 14:27:00 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 14:27:00 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef MOVERIGHT_HPP
#define MOVERIGHT_HPP

#include "AInstructions.hpp"

class MoveRight : public AInstructions
{

public:

	// Constructor
	MoveRight(Container *container);

	// Copy constructor
	MoveRight(const MoveRight &src);

	// Destructor
	virtual ~MoveRight();

	// Assignation operator overload
	MoveRight &			operator=(const MoveRight &rhs);

	// Execute instructions
	void				execute();
};


#endif //MOVERIGHT_HPP

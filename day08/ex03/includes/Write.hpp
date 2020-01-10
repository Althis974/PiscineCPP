/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Write.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 15:05:18 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 15:05:18 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef WRITE_HPP
#define WRITE_HPP


#include "AInstructions.hpp"

class Write : public AInstructions
{

public:

	// Constructor
	Write(Container *container);

	// Copy constructor
	Write(const Write &src);

	// Destructor
	virtual ~Write();

	// Assignation operator overload
	Write &				operator=(const Write &rhs);

	// Execute instructions
	void				execute();
};


#endif //WRITE_HPP

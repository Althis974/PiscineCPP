/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Read.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 15:10:44 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 15:10:44 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef READ_HPP
#define READ_HPP

#include "AInstructions.hpp"

class Read : public AInstructions
{

public:

	// Constructor
	Read(Container *container);

	// Copy constructor
	Read(const Read &src);

	// Destructor
	virtual ~Read();

	// Assignation operator overload
	Read &				operator=(const Read &rhs);

	// Execute instructions
	void				execute();
};


#endif //READ_HPP

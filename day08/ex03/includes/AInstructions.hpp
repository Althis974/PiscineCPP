/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AInstructions.hpp                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 11:14:24 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 11:14:24 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef AINSTRUCTIONS_HPP
#define AINSTRUCTIONS_HPP

# include "Container.hpp"

class AInstructions
{

public:

	// Constructors
	AInstructions();
	AInstructions(Container *container);

	// Copy constructor
	AInstructions(const AInstructions &src);

	// Destructor
	virtual ~AInstructions();

	// Assignation operator overload
	AInstructions &		operator=(const AInstructions &rhs);

	// Execute instructions
	virtual void		execute() = 0;

protected:

	Container *			_container;

};


#endif //AINSTRUCTIONS_HPP

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Increment.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 14:45:12 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 14:45:12 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef INCREMENT_HPP
#define INCREMENT_HPP

#include "AInstructions.hpp"

class Increment : public AInstructions
{
	
public:

	// Constructor
	Increment(Container *container);

	// COpy constructor
	Increment(const Increment &src);

	// Destructor
	virtual ~Increment();

	// Assignation operator overload
	Increment &			operator=(const Increment &rhs);

	void				execute();
};


#endif //INCREMENT_HPP

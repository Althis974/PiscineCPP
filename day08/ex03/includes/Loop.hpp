/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Loop.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 15:21:45 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 15:21:45 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LOOP_HPP
#define LOOP_HPP

#include "AInstructions.hpp"
#include <vector>

class Loop : public AInstructions
{
	
public:

	// Constructor
	Loop(Container *container, const std::vector<AInstructions *> &vector);

	// Copy constructor
	Loop(const Loop &src);

	// Destructor
	virtual ~Loop();

	// Assignation operator overload
	Loop &							operator=(const Loop &rhs);

	// Execute instructions
	void							execute();

private:

	std::vector<AInstructions *>	_vector;
};


#endif //LOOP_HPP

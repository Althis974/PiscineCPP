/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   StripMiner.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 12:41:37 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 12:41:37 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
#define STRIPMINER_HPP

#include "IMiningLaser.hpp"
#include <iostream>

class	StripMiner : public IMiningLaser
{

public:

	// Constructor
	StripMiner();

	// Copy constructor
	StripMiner(const StripMiner &src);

	// Destructor
	virtual ~StripMiner();

	// Assignation operator overload
	StripMiner &			operator=(const StripMiner &rhs);

	// Mine
	void					mine(IAsteroid *asteroid);
};


#endif //STRIPMINER_HPP

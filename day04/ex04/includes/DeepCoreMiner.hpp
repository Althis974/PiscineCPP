/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   DeepCoreMiner.hpp                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 12:41:25 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 12:41:25 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
#define DEEPCOREMINER_HPP

#include "IMiningLaser.hpp"
#include <iostream>

class	DeepCoreMiner : public IMiningLaser
{

public:

	// Constructor
	DeepCoreMiner();

	// Copy constructor
	DeepCoreMiner(const DeepCoreMiner &src);

	// Destructor
	virtual ~DeepCoreMiner();

	// Assignation operator overload
	DeepCoreMiner &			operator=(const DeepCoreMiner &rhs);

	// Mine
	void					mine(IAsteroid *asteroid);
};


#endif //DEEPCOREMINER_HPP

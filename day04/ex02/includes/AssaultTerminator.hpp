/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AssaultTerminator.hpp                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 09:59:50 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 09:59:50 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class	AssaultTerminator : public ISpaceMarine
{

public:

	// Constructor
	AssaultTerminator();

	// Copy constructor
	AssaultTerminator(const AssaultTerminator &src);

	// Destructor
	virtual ~AssaultTerminator();

	// Assignation operator overload
	AssaultTerminator &		operator=(const AssaultTerminator &rhs);

	// Return copy of current object
	ISpaceMarine *			clone() const;

	// Say something nice
	void					battleCry() const;

	// Ranged attack
	void					rangedAttack() const;

	// Melee attack
	void					meleeAttack() const;
};


#endif //ASSAULTTERMINATOR_HPP

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   TacticalMarine.hpp                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 09:57:45 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 09:57:45 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{

public:

	// Constructor
	TacticalMarine();

	// Copy constructor
	TacticalMarine(TacticalMarine const &src);

	// Destructor
	virtual ~TacticalMarine();

	// Assignation operator overload
	TacticalMarine &		operator=(TacticalMarine const &rhs);

	// Return copy of current object
	ISpaceMarine *			clone() const;

	// Say something nice
	void					battleCry() const;

	// Ranged attack
	void					rangedAttack() const;

	// Melee attack
	void					meleeAttack() const;
};


#endif //TACTICALMARINE_HPP

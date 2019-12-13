/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Undead.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 17:32:46 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 17:32:46 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef UNDEAD_HPP
#define UNDEAD_HPP

#include "Enemy.hpp"

class Undead : public Enemy
{

public:

	// Constructor
	Undead();

	// Copy constructor
	Undead(Undead &src);

	// Destructor
	virtual ~Undead();

	// Assignation operator overload
	Undead &operator=(Undead const &rhs);

	// Suffer
	virtual void		takeDamage(int damage);
};


#endif //UNDEAD_HPP

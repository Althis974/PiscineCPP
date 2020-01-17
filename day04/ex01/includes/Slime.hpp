/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Slime.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 17:32:03 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 17:32:03 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SLIME_HPP
#define SLIME_HPP

#include "Enemy.hpp"
#include <iostream>
#include <string>

class Slime : public Enemy
{

public:

	// Constructor
	Slime();

	// Copy constructor
	Slime(const Slime &src);

	// Destructor
	virtual ~Slime();

	// Assignation operator overload
	Slime &				operator=(const Slime &rhs);

	// Suffer
	virtual void		takeDamage(int damage);
};


#endif //SLIME_HPP

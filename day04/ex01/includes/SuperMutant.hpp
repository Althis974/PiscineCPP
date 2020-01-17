/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   SuperMutant.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 15:28:51 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 15:28:51 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"
#include <iostream>
#include <string>

class SuperMutant : public Enemy
{

public:

	// Constructor
	SuperMutant();

	// Copy constructor
	SuperMutant(const SuperMutant &src);

	// Destructor
	virtual ~SuperMutant();

	// Assignation operator overload
	SuperMutant &		operator=(const SuperMutant &rhs);

	// Suffer
	virtual void		takeDamage(int damage);
};


#endif //SUPERMUTANT_HPP

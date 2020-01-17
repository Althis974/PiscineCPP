/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Grenade.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 17:26:51 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 17:26:51 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GRENADE_HPP
#define GRENADE_HPP

#include "AWeapon.hpp"
#include <iostream>
#include <string>

class Grenade : public AWeapon
{

public:

	// Constructor
	Grenade();

	// Copy constructor
	Grenade(const Grenade &src);

	// Destructor
	virtual ~Grenade();

	// Assignation operator overload
	Grenade &		operator=(const Grenade &rhs);

	// Attack
	void			attack() const;
};


#endif //GRENADE_HPP

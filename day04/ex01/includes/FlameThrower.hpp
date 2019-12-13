/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   FlameThrower.hpp                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 17:24:10 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 17:24:10 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FLAMETHROWER_HPP
#define FLAMETHROWER_HPP

#include "AWeapon.hpp"

class FlameThrower : public AWeapon
{

public:

	// Constructor
	FlameThrower();

	// Copy constructor
	FlameThrower(const FlameThrower &obj);

	// Destructor
	virtual ~FlameThrower();

	// Assignation operator overload
	FlameThrower &		operator=(FlameThrower const &rhs);

	// Attack
	void			attack() const;
};


#endif //FLAMETHROWER_HPP

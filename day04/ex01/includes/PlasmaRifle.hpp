/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PlasmaRifle.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 14:20:14 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 14:20:14 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

# include "AWeapon.hpp"
# include <iostream>
# include <string>

class PlasmaRifle : public AWeapon
{

public:

	// Constructor
	PlasmaRifle();

	// Copy constructor
	PlasmaRifle(const PlasmaRifle &src);

	// Destructor
	virtual ~PlasmaRifle();

	// Assignation operator overload
	PlasmaRifle &	operator= (const PlasmaRifle &rhs);

	// Attack
	virtual void	attack() const;
};


#endif //PLASMARIFLE_HPP

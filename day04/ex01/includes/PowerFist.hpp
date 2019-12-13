/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   PowerFist.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 14:35:25 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 14:35:25 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{

public:

	// Constructor
	PowerFist();

	// Copy constructor
	PowerFist(const PowerFist &obj);

	// Destructor
	virtual ~PowerFist();

	// Assignation operator overload
	PowerFist &		operator=(PowerFist const &rhs);

	// Attack
	void			attack() const;
};


#endif //POWERFIST_HPP

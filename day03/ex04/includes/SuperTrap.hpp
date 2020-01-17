/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   SuperTrap.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 16:14:23 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 16:14:23 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>
#include <string>

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{

public:

	// Constructors
	SuperTrap();
	SuperTrap(const std::string &name);

	// Copy constructor
	SuperTrap(const SuperTrap &src);

	// Destructor
	virtual ~SuperTrap();

	// Assignation operator overload
	SuperTrap &			operator=(const SuperTrap &rhs);

	// Attacks
	using				FragTrap::rangedAttack;
	using				NinjaTrap::meleeAttack;
};


#endif //SUPERTRAP_HPP

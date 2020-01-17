/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   NinjaTrap.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 14:53:10 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 14:53:10 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>
#include <string>

class NinjaTrap : public ClapTrap
{

public:

	// Constructors
	NinjaTrap();
	NinjaTrap(const std::string &name);

	// Copy constructor
	NinjaTrap(const NinjaTrap &src);

	// Destructor
	virtual ~NinjaTrap();

	// Assignation operator overload
	NinjaTrap &				operator=(const NinjaTrap &rhs);

	// Trap a ClapTrap
	void					ninjaShoebox(ClapTrap &target);

	// Trap a FragTrap
	void					ninjaShoebox(FragTrap &target);

	// Trap a ScavTrap
	void					ninjaShoebox(ScavTrap &target);

	// Trap a NinjaTrap
	void					ninjaShoebox(NinjaTrap &target);

private:

	static std::string		_NinjaQuotes[5];
};


#endif //NINJATRAP_HPP

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HumanA.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 17:00:51 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/03 17:00:51 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{

public:

	// Constructor
	HumanA(const std::string &name, Weapon &weapon);

	// Destructor
	~HumanA();

	// Attack
	void			attack() const;

private:

	std::string		_name;
	Weapon &		_weapon;
};

#endif //HUMANA_HPP

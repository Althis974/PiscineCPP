/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HumanB.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 17:01:02 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/03 17:01:02 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{

public:

	// Constructor
	HumanB(std::string const &name);

	// Destructor
	~HumanB();

	// Setter
	void	setWeapon(Weapon &w);

	// Attack
	void	attack() const;

private:

	std::string _name;
	Weapon *_weapon;
};


#endif //HUMANB_HPP

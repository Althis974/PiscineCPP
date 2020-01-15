/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   HumanA.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 17:01:27 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/03 17:01:27 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

// Constructor

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name),
				_weapon(weapon)
{

}

// Destructor

HumanA::~HumanA()
{

}

// Attack

void	HumanA::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_weapon.getType()
			  << std::endl;
}

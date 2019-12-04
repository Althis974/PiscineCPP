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

HumanA::HumanA(std::string const &name, Weapon &w) : _name(name), _weapon(w)
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

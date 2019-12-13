/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   SuperMutant.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 15:30:31 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 15:30:31 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/SuperMutant.hpp"

// Constructor

SuperMutant::SuperMutant() : Enemy("Super Mutant", 170)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

// Copy constructor

SuperMutant::SuperMutant(SuperMutant &src) : Enemy(src)
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

// Destructor

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant &		SuperMutant::operator=(SuperMutant const &rhs)
{
	Enemy::operator=(rhs);

	return (*this);
}

// takeDamage overload

void				SuperMutant::takeDamage(int damage)
{
	damage - 3 > 0 ? this->_hp -= damage - 3 : 0;
	this->_hp < 0 ? this->_hp = 0 : 0;
}
/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Undead.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 17:32:13 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 17:32:13 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Undead.hpp"

// Constructor

Undead::Undead() : Enemy("Undead", 100)
{
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}

// Copy constructor

Undead::Undead(Undead &src) : Enemy(src)
{
	std::cout << "Braiiiiiiinnnssss..." << std::endl;
}

// Destructor

Undead::~Undead()
{
	std::cout << "Aaaaarggggghhh..." << std::endl;
}

Undead &		Undead::operator=(Undead const &rhs)
{
	Enemy::operator=(rhs);

	return (*this);
}

// takeDamage overload

void				Undead::takeDamage(int damage)
{
	damage - 5 > 0 ? this->_hp -= damage - 5 : 0;
	this->_hp < 0 ? this->_hp = 0 : 0;
}
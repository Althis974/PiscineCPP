/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Slime.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 17:32:40 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 17:32:40 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Slime.hpp"

// Constructor

Slime::Slime() : Enemy("Slime", 200)
{
	std::cout << "Slurp." << std::endl;
}

// Copy constructor

Slime::Slime(Slime &src) : Enemy(src)
{
	std::cout << "Slurp." << std::endl;
}

// Destructor

Slime::~Slime()
{
	std::cout << "Sprotch." << std::endl;
}

Slime &		Slime::operator=(Slime const &rhs)
{
	Enemy::operator=(rhs);

	return (*this);
}

// takeDamage overload

void				Slime::takeDamage(int damage)
{
	damage - 3 > 20 ? this->_hp -= damage - 20 : 0;
	this->_hp < 0 ? this->_hp = 0 : 0;
}
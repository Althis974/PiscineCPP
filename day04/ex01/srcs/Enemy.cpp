/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Enemy.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 14:43:28 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 14:43:28 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Enemy.hpp"

// Constructor

Enemy::Enemy( std::string const &type, int hp) : _type(type), _hp(hp)
{

}

// Copy constructor

Enemy::Enemy(const Enemy &src) : _type(src._type), _hp(src._hp)
{

}

// Destructor

Enemy::~Enemy()
{

}

// Assignation operator overload

Enemy &			Enemy::operator=(Enemy const &rhs)
{
	this->_type = rhs._type;
	this->_hp = rhs._hp;

	return (*this);
}

// Getters

std::string		Enemy::getType() const
{
	return (this->_type);
}

int				Enemy::getHP() const
{
	return (this->_hp);
}

// Suffer

void			Enemy::takeDamage(int damage)
{
	damage > 0 ? this->_hp -= damage : 0;
	this->_hp < 0 ? this->_hp = 0 : 0;
}
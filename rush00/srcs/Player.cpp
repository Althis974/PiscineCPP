/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Player.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 11:51:17 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 11:51:17 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Player.hpp"

// Constructors

Player::Player() : Entity()
{

}

Player::Player(t_pos pos) : Entity(pos, 3)
{

}

// Copy constructor

Player::Player(const Player &src) : Entity(src)
{

}

// Destructor

Player::~Player()
{

}

// Assignation operator overload

Player &		Player::operator=(const Player &rhs)
{
	Entity::operator=(rhs);

	return (*this);
}

// Lose a live if an enemy reached bottom

int				Player::loseLive()
{
	this->_lives--;

	if (this->_lives < 0) {
		this->_lives = 0;
		return (1);
	}
	return (0);
}

// Lose a live if is hit by a bullet

int				Player::hitByBullet()
{
	static int i = 0;

	this->_lives--;

	if (/*!this->_lives ||*/ (this->_lives < 0 && i > 2))
	{
		i = 0;
		this->_lives = 0;
		return (1);
	}

	if (this->_lives < 0)
	{
		this->_lives = this->_lives + 3 - i;
		i++;
	}

	return (0);
}

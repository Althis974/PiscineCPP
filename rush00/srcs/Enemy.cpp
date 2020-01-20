/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Enemy.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 12:47:40 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 12:47:40 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Enemy.hpp"

// Constructor

Enemy::Enemy() : Entity()
{

}

Enemy::Enemy(t_pos pos) : Entity(pos)
{

}

Enemy::Enemy(const Enemy &src) : Entity(src)
{

}

// Destructor

Enemy::~Enemy()
{

}

Enemy &			Enemy::operator=(const Enemy &rhs)
{
	Entity::operator=(rhs);

	return (*this);
}

// Moves

int				Enemy::movement(t_pos map)
{
	if (this->_pos.x < map.x)
			moveRight();
	else if (this->_pos.y < (map.y - 2))
	{
		moveDown();
		this->_pos.x = 3;
	}
	else
	{
		this->_lives = 0;

		return (1);
	}

	return (0);
}

// Check if enemy is alive

bool			Enemy::isAlive() const
{
	return (this->getLives() > 0);
}
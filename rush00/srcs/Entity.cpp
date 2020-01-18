/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Entity.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 12:45:02 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 12:45:02 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Entity.hpp"

// Constructors

Entity::Entity() : _lives(1)
{

}

Entity::Entity(t_pos pos) : _pos(pos), _lives(1)
{

}

Entity::Entity(t_pos pos, int lives) : _pos(pos), _lives(lives)
{

}

// Copy constructor

Entity::Entity(const Entity &src) : _pos(src._pos), _lives(src._lives)
{

}

// Destructor

Entity::~Entity()
{

}

// Assignation operator overload

Entity &		Entity::operator=(const Entity &rhs)
{
	this->_pos = rhs._pos;
	this->_lives = rhs._lives;

	return (*this);
}

// Setters

void			Entity::setPos(int x, int y)
{
	this->_pos.x = x;
	this->_pos.y = y;
}

void			Entity::setLives(int n)
{
	this->_lives = n;
}

// Getters

int				Entity::getPosX()
{
	return (this->_pos.x);
}

int				Entity::getPosY()
{
	return (this->_pos.y);
}

int				Entity::getLives()
{
	return (this->_lives);
}

// Moves

void			Entity::moveRight()
{
	this->_pos.x++;
}

void			Entity::moveLeft()
{
	this->_pos.x--;
}

void			Entity::moveUp()
{
	this->_pos.y--;
}

void			Entity::moveDown()
{
	this->_pos.y++;
}

// Check it entity has been hit

int				Entity::isHit(int x, int y)
{
	if (this->_pos.x == x && this->_pos.y == y)
	{
		this->_lives = 0;

		return (1);
	}

	return (0);
}


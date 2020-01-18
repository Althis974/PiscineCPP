/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Bullet.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 13:57:50 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 13:57:50 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Bullet.hpp"

// Constructors

Bullet::Bullet()
{

}

Bullet::Bullet(t_pos pos) : _pos(pos), _lives(0)
{

}

// Copy constructor

Bullet::Bullet(const Bullet &src) : _pos(src._pos), _type(src._type),
									_lives(src._lives)
{

}

// Destructors

Bullet::~Bullet()
{

}

Bullet &		Bullet::operator=(const Bullet &rhs)
{
	this->_pos = rhs._pos;
	this->_type = rhs._type;
	this->_lives = rhs._lives;

	return (*this);
}

// Setters

void			Bullet::setLives(int n)
{
	this->_lives = n;
}

void			Bullet::setInfo(int x, int y, int lives)
{
	this->_pos.x = x;
	this->_pos.y = y;
	this->_lives = lives;
}

// Getters

int				Bullet::getPosX()
{
	return (this->_pos.x);
}

int				Bullet::getPosY()
{
	return (this->_pos.y);
}

int				Bullet::getLives()
{
	return (this->_lives);
}

// Moves management

void			Bullet::moveUp()
{
	this->_pos.y--;
}

void			Bullet::moveDown()
{
	this->_pos.y++;
}

// Print a bullet shot by player

void			Bullet::shootBullet()
{
	mvprintw(this->_pos.y, this->_pos.x, "⥉");
}

// Print a bullet shot by enemies

void			Bullet::shootEnemiesBullet()
{
	mvprintw(this->_pos.y, this->_pos.x, "⌬");
}

// Explicit

void			Bullet::clearBullet()
{
	mvprintw(_pos.y, _pos.x, " ");
}
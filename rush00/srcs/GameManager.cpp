/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   GameManager.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/19 11:08:48 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 11:08:48 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/GameManager.hpp"
#include "../includes/Display.hpp"

// Constructor

GameManager::GameManager(t_pos pos) : World(pos), _gameStatus(1),
				_score(0), _nbFrags(0), _startTime(time(NULL)), _level(1)
{

}

// Copy constructor

GameManager::GameManager(const GameManager &src) : World(src),
				_gameStatus(src._gameStatus), _score(src._score),
				_nbFrags(src._nbFrags), _startTime(time(NULL)), _level(1)
{

}

// Destructor

GameManager::~GameManager()
{

}

// Assignation operator overload

GameManager &		GameManager::operator=(const GameManager &rhs)
{
	World::operator=(rhs);
	this->_gameStatus = rhs._gameStatus;
	this->_score = rhs._score;
	this->_nbFrags = rhs._nbFrags;

	return (*this);
}

// Setters

void			GameManager::setStatus(int status)
{
	this->_gameStatus = status;
}

// Getters

int				GameManager::getCurrentLevel() const
{
	return (this->_level);
}

time_t			GameManager::getStartTime() const
{
	return (this->_startTime);
}

int				GameManager::getStatus() const
{
	return (this->_gameStatus);
}

int				GameManager::getScore() const
{
	return (this->_score);
}

// Enemies moves manager

void			GameManager::moveEnemies()
{
	this->_nbFrags = 0;

	for (int i = 0; i < this->_nbEnemies; ++i)
	{
		if (this->_enemies[i].getLives())
		{
			if (this->_enemies[i].movement(this->_map))
				if (this->_player.loseLive())
					this->_gameStatus = 0;
		}

		if (!this->_enemies[i].getLives())
			this->_nbFrags++;
	}

	if (this->_nbFrags == this->_nbEnemies) {
		this->_level++;
		spawnEnemies();
	}
}

// Collisions manager

bool			GameManager::isEnemyHit(int x, int y)
{
	for (int i = 0; i < this->_nbEnemies; ++i)
	{
		if (this->_enemies[i].getLives() && this->_enemies[i].isHit(x, y))
		{
			this->_score = this->_score + 1;

			return (true);
		}
	}

	return (false);
}

bool			GameManager::isPlayerHit(int x, int y)
{
	if (this->_player.isHit(x, y))
	{
		if (this->_player.hitByBullet())
			this->_gameStatus = 0;

		return (true);
	}
	return (false);
}

// Bullets manager

void			GameManager::movePlayerBullets()
{
	for (int i = 0; i < this->_nbPlayerBullets; ++i)
	{
		if (this->_playerBullets[i].getLives())
		{
			this->_playerBullets[i].moveUp();

			if (this->_playerBullets[i].getPosY() == 1)
			{
				this->_playerBullets[i].setLives(0);
			}

			if (isEnemyHit(this->_playerBullets[i].getPosX(),
					this->_playerBullets[i].getPosY()))
			{
				this->_playerBullets[i].setLives(0);
			}
		}
	}
}

void			GameManager::moveEnemyBullets()
{
	for (int i = 0; i < this->_nbEnemiesBullets; ++i)
	{
		if (this->_enemiesBullets[i].getLives())
		{
			this->_enemiesBullets[i].moveDown();

			if (this->_enemiesBullets[i].getPosY() >= (this->_map.y - 1))
			{
				this->_enemiesBullets[i].setLives(0);
			}

			if (isPlayerHit(this->_enemiesBullets[i].getPosX(),
					this->_enemiesBullets[i].getPosY()))
			{
				this->_enemiesBullets[i].setLives(0);
			}
		}
	}
}

int					GameManager::getNbPlayerBulletsShot() const
{
	int nb = 0;

	for (int i = 0; i < this->_nbPlayerBullets; ++i)
		if (!this->_playerBullets[i].getLives())
			++nb;

	return (nb);
}

// Shoot manager

void				GameManager::playerShoot()
{
	for (int i = 0; i < this->_nbPlayerBullets; ++i)
	{
		if (!this->_playerBullets[i].getLives())
		{

			this->_playerBullets[i].setInfo(this->_player.getPosX(),
					this->_player.getPosY(), 1);

			return;
		}
	}
}

void				GameManager::enemiesShoot()
{
	int x = -1;

	for (int i = 0; i < this->_nbEnemiesBullets; ++i)
	{
		if (!this->_enemiesBullets[i].getLives() && this->_enemies[i].getLives())
		{
			this->_enemiesBullets[i].setInfo(this->_enemies[i].getPosX() + x,
					this->_enemies[i].getPosY(), 1);

			return;
		}
	}
}

// Inputs manager

void			GameManager::getInput(int key)
{
	if (key == ESC) {
		setStatus(0);
		return;
	}

	if (key == SP)
		playerShoot();

	//if (key == KEY_RIGHT || key == KEY_LEFT || key == A || key == D)
	//	mvaddch(this->_player.getPosY(), this->_player.getPosX(), ' ');

	if ((key == KEY_RIGHT || key == D) && this->_player.getPosX() < this->_map.x - 1)
		this->_player.moveRight();

	if ((key == KEY_LEFT || key == A) && this->_player.getPosX() > 2)
		this->_player.moveLeft();
}

void			GameManager::updateDisplay()
{
	clear();
	Display::update_stats(this);
	Display::update_map(this);
	refresh();
}

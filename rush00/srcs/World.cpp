/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   World.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 14:44:34 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 14:44:34 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/World.hpp"

// Constructors

World::World(t_pos pos) : _map(pos)
{
	this->_gameStatus = 3;
	this->_score = 0;
	this->_nbFrags = 0;
	this->_nbEnemies = 10;
	this->_nbPlayerBullets = 20;
	this->_nbEnemiesBullets = 10;

	this->_enemies = new Enemy[this->_nbEnemies];
	this->_playerBullets = new Bullet[this->_nbPlayerBullets];
	this->_enemiesBullets = new Bullet[this->_nbEnemiesBullets];

	spawnEnemies();
	spawnPlayer();
}

// Copy constructor

World::World(const World &src) : _map(src._map)
{
	this->_gameStatus = src._gameStatus;
	this->_score = src._score;
	this->_nbFrags = src._nbFrags;
	this->_nbEnemies = src._nbEnemies;
	this->_nbPlayerBullets = src._nbPlayerBullets;
	this->_nbEnemiesBullets = src._nbEnemiesBullets;

	for (int i = 0; i < this->_nbEnemies; ++i)
		this->_enemies[i] = src._enemies[i];

	for (int i = 0; i < this->_nbPlayerBullets; ++i)
		this->_playerBullets[i] = src._playerBullets[i];

	for (int i = 0; i < this->_nbPlayerBullets; ++i)
		this->_enemiesBullets[i] = src._enemiesBullets[i];

	spawnEnemies();
	spawnPlayer();
}

// Destructor

World::~World()
{
	delete [] this->_playerBullets;
	delete [] this->_enemiesBullets;
	delete [] this->_enemies;
}

// Assignation operator overload

World &			World::operator=(const World &rhs)
{
	this->_gameStatus = rhs._gameStatus;
	this->_score = rhs._score;
	this->_nbFrags = rhs._nbFrags;
	this->_nbEnemies = rhs._nbEnemies;
	this->_nbPlayerBullets = rhs._nbPlayerBullets;
	this->_nbEnemiesBullets = rhs._nbPlayerBullets;
	this->_map = rhs._map;
	this->_player = rhs._player;

	for (int i = 0; i < this->_nbEnemies; ++i)
		this->_enemies[i] = rhs._enemies[i];

	for (int i = 0; i < this->_nbPlayerBullets; ++i)
		this->_playerBullets[i] = rhs._playerBullets[i];

	for (int i = 0; i < this->_nbPlayerBullets; ++i)
		this->_enemiesBullets[i] = rhs._enemiesBullets[i];

	return (*this);
}

// Getters

int				World::getStatus()
{
	return (this->_gameStatus);
}

// Spawners

void		World::spawnPlayer()
{
	t_pos	pos = {this->_map.x / 2, this->_map.y - 1};

	this->_player = Player(pos);

	printPlayer();
}

void		World::spawnEnemies()
{
	clear();

	delete [] this->_enemiesBullets;
	delete [] this->_enemies;
	delete [] this->_playerBullets;

	this->_nbEnemies = 10;
	this->_nbEnemiesBullets = 10;
	this->_nbPlayerBullets = 20;

	this->_enemiesBullets = new Bullet[this->_nbEnemiesBullets];
	this->_enemies = new Enemy[this->_nbEnemies];
	this->_playerBullets = new Bullet[this->_nbPlayerBullets];

	for (int i = 0; i < this->_nbPlayerBullets; ++i)
	{
		if (this->_playerBullets[i].getLives())
		{
			this->_playerBullets[i].setLives(0);
			this->_playerBullets[i].clearBullet();
		}
	}

	for (int i = 0; i < this->_nbEnemies; ++i)
	{
		this->_enemies[i].setPos(3 + (rand() % this->_map.x + 2), 1 + (rand() % 2 + 1));
		this->_enemies[i].setLives(1);
	}
}

// Enemies moves manager

void		World::moveEnemies()
{
	this->_nbFrags = 0;

	clearMoves();
	for (int i = 0; i < this->_nbEnemies; i++){
		if (this->_enemies[i].getLives())
		{
			if(this->_enemies[i].movement(this->_map))
			{
				if(this->_player.loseLive())
					this->_gameStatus = 0;
			}
			mvprintw(this->_enemies[i].getPosY(), this->_enemies[i].getPosX(), "ꆜ");
		}
		if (!this->_enemies[i].getLives())
			this->_nbFrags++;
	}

	if (this->_nbFrags == this->_nbEnemies)
		spawnEnemies();

	printPlayer();
}

void		World::clearMoves()
{
	for (int i = 0; i < this->_nbEnemies; ++i)
		mvprintw(this->_enemies[i].getPosY(), this->_enemies[i].getPosX(), " ");
}

// Printers

void		World::printPlayer()
{
	// TODO: Complete
	printEnemies();
}

void		World::printEnemies()
{
	// TODO: Complete
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   World.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 14:44:37 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 14:44:37 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef WORLD_HPP
#define WORLD_HPP

#include "env.hpp"
#include "Player.hpp"
#include "Bullet.hpp"
#include "Enemy.hpp"

class World
{

public:

	// Constructors
	World();
	World(t_pos pos);

	// Copy constructor
	World(const World &src);

	// Destructor
	virtual ~World();

	// Assignation operator overload
	World &		operator=(const World &rhs);

	// Getters
	int 		getMaxNbPlayerBullets() const;
	int 		getPlayerLives() const;
	Player		getPlayer() const;
	Enemy *		getEnemies() const;
	Bullet *	getEnemiesBullets() const;
	Bullet *	getPlayerBullets() const;
	int			getNbEnemies() const;
	int			getMaxNbEnemiesBullets() const;

	// Spawners
	void		spawnPlayer();
	void		spawnEnemies();

protected:

	// Number of enemies
	int 		_nbEnemies;

	// Number of bullets shot by player
	int 		_nbPlayerBullets;

	// Number of bullets shot by enemies
	int 		_nbEnemiesBullets;

	// Map infos
	t_pos		_map;

	// Player
	Player		_player;

	// Enemies list
	Enemy *		_enemies;

	// List of bullets shot by player
	Bullet *	_playerBullets;

	// List of bullets shot by enemies
	Bullet *	_enemiesBullets;

};


#endif //WORLD_HPP

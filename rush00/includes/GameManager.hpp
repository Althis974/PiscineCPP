/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   GameManager.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/19 11:08:22 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/19 11:08:22 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef GAME_HPP
#define GAME_HPP

#include "World.hpp"

class GameManager : public World
{

public:

	// Constructors
	GameManager();
	GameManager(t_pos pos);

	// Copy constructor
	GameManager(const GameManager &src);

	// Destructor
	virtual ~GameManager();

	// Assignation operator overload
	GameManager &		operator=(const GameManager &rhs);

	// Setters
	void		setStatus(int status);

	// Getters
	time_t		getStartTime() const;
	int			getCurrentLevel() const;
	int 		getStatus() const;
	int 		getScore() const;

	// Enemies moves manager
	void		moveEnemies();
	

	// Collisions manager
	bool 		isEnemyHit(int x, int y);
	bool 		isPlayerHit(int x, int y);

	// Bullets manager
	void		movePlayerBullets();
	void		moveEnemyBullets();
	int 		getNbPlayerBulletsShot() const;

	// Shoot manager
	void		playerShoot();
	void		enemiesShoot();

	// Inputs manager
	void		getInput(int key);

	// Update display
	void		updateDisplay();

private:

	// Value to know if game is over, running, paused etc...
	int			_gameStatus;

	// Explicit
	int 		_score;

	// Number of enemies killed
	int 		_nbFrags;

	// For display
	time_t		_startTime;
	int			_level; // not working

};


#endif //GAME_HPP

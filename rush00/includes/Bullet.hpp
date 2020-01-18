/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Bullet.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 13:57:53 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 13:57:53 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef BULLET_HPP
#define BULLET_HPP

#include "env.hpp"

class Bullet
{

public:

	// Constructors
	Bullet();
	Bullet(t_pos pos);

	// Copy constructor
	Bullet(const Bullet &src);

	// Destructor
	~Bullet();
	Bullet &		operator=(const Bullet &rhs);

	// Setters
	void			setLives(int n);
	void			setInfo(int x, int y, int lives);

	// Getters
	int				getPosX();
	int				getPosY();
	int				getLives();

	// Moves management
	void			moveUp();
	void			moveDown();

	// Print a bullet shot by player
	void			shootBullet();

	// Print a bullet shot by enemies
	void			shootEnemiesBullet();

	// Explicit
	void			clearBullet();



protected:

	t_pos			_pos;
	int             _type;
	int             _lives;
};


#endif //BULLET_HPP

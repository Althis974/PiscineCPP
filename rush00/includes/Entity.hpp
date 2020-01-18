/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Entity.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 12:43:41 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 12:43:41 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ENTITY_HPP
#define ENTITY_HPP

#include "env.hpp"

class Entity
{

public:

	// Constructors
	Entity();
	Entity(t_pos pos);
	Entity(t_pos pos, int lives);

	// Copy constructor
	Entity(const Entity &src);

	// Destructor
	virtual ~Entity();

	// Assignation operator overload
	Entity &			operator=(const Entity &rhs);

	// Setters
	void			setPos(int x, int y);
	void			setLives(int n);

	// Getters
	int				getPosX();
	int				getPosY();
	int				getLives();

	// Moves
	void			moveRight();
	void			moveLeft();
	void			moveUp();
	void			moveDown();

	// Collision
	int				isHit(int x, int y);

protected:


	t_pos			_pos;
	int				_lives;
};


#endif //ENTITY_HPP

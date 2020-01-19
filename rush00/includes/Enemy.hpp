/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Enemy.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 12:47:48 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 12:47:48 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "Entity.hpp"

class Enemy : public Entity
{

public:

	// Constructors
	Enemy();
	Enemy(t_pos pos);

	// COpy constructor
	Enemy(const Enemy &src);

	// Destructor
	virtual ~Enemy();

	// Assignation operator overload
	Enemy &			operator=(const Enemy &rhs);

	// Moves
	int             movement(t_pos map);

	// Check if enemy is alive
	bool			isAlive() const;
};


#endif //ENEMY_HPP

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Player.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 11:51:20 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 11:51:20 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Entity.hpp"

class	Player : public Entity
{

public:

	// Constructors
	Player();
	Player(t_pos pos);

	// Copy constructor
	Player(const Player &src);

	// Destructor
	virtual ~Player();

	// Assignation operator overload
	Player &		operator=(const Player &rhs);

	// Lose a live if an enemy reached bottom
	int             loseLive();

	// Lose a live if is hit by a bullet
	int             hitByBullet();
};


#endif //PLAYER_HPP

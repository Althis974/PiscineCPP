/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Enemy.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 14:43:18 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 14:43:18 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "iostream"

class Enemy
{

public:

	// Constructors
	Enemy();

	Enemy( std::string const &type, int hp);

	// Copy constructor
	Enemy(const Enemy &src);

	// Destructor
	virtual ~Enemy();

	// Assignation operator overload
	Enemy &			operator=(Enemy const &rhs);

	// Getters
	std::string		getType() const;
	int				getHP() const;

	// Suffer
	virtual void	takeDamage(int damage);

protected:

	std::string		_type;
	int				_hp;

};


#endif //ENEMY_HPP

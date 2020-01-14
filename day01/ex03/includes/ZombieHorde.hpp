/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieHorde.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/02 14:35:02 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/02 14:35:02 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
#define ZOMBIEHORDE_HPP

#include "Zombie.hpp"
#include <iostream>

class ZombieHorde
{

public:

	// Constructor
	ZombieHorde(int n);

	// Destructor
	~ZombieHorde();

	// Announce
	void					announce() const;

private:

	int						_nb;
	Zombie *				_zombies;
	static std::string		_names[10];
};


#endif //ZOMBIEHORDE_HPP

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieHorde.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/02 14:34:55 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/02 14:34:55 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ZombieHorde.hpp"

// Constructor

ZombieHorde::ZombieHorde(int n) : _nb(n)
{
	std::cout << "\n---- Let's The Bloody Harvest Begin! ----\n\n" << std::endl;

	this->_zombies = new Zombie[n];

	for (int i = 0; i < n; ++i)
	{
		_zombies[i].setName(_names[std::rand() % 10]);
	}
}

// Destructor

ZombieHorde::~ZombieHorde()
{
	delete [] this->_zombies;

	std::cout << "\n\n*wailing* The VaultHunters Ruined It..! ";
	std::cout << "*loud gunshots*\n\n" << std::endl;
}

// Announce

void ZombieHorde::announce() const
{
	for (int i = 0; i < this->_nb; ++i)
		_zombies[i].announce();
}

// Pool of names for random

std::string ZombieHorde::_names[] = {
		"TK Baha",
		"Clark",
		"Jacques O'Lantern",
		"Pumpkin Kingpin",
		"Cortex",
		"Cerebrawl",
		"Curtis",
		"Dina",
		"Billy",
		"Francky"
};
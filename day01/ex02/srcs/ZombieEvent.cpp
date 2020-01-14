/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ZombieEvent.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/29 16:09:21 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/29 16:09:21 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ZombieEvent.hpp"

// Constructor

ZombieEvent::ZombieEvent()
{
	std::cout << "\n---- Let's The Bloody Harvest Begin! ----\n\n" << std::endl;
}

// Destructor

ZombieEvent::~ZombieEvent()
{
	std::cout << "\n\n*wailing* The VaultHunters Ruined It..! ";
	std::cout << "*loud gunshots*\n" << std::endl;
}

// ZombieType setter

void			ZombieEvent::setZombieType(const std::string &type)
{
	this->_type = type;
}

// Create zombie with the chosen type

Zombie *		ZombieEvent::newZombie(const std::string &name) const
{
	return (new Zombie(name, this->_type));
}

// Create zombie with random name

void			ZombieEvent::randomChump() const
{
	Zombie z = Zombie(ZombieEvent::_names[std::rand() % 8],
						this->_type);
}

// Pool of names for random

std::string		ZombieEvent::_names[] = {
		"TK Baha",
		"Clark",
		"Jacques O'Lantern",
		"Pumpkin Kingpin",
		"Cortex",
		"Cerebrawl",
		"Curtis",
		"Dina"
};
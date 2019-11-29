/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/29 16:09:59 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/29 16:09:59 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

// Constructor

Zombie::Zombie(std::string const &name, std::string const &type) : _name(name),
		_type(type)
{
	this->announce();
}

// Destructor

Zombie::~Zombie()
{
	std::cout << "<" << this->_name << " (" << this->_type
			  << ")> Aaaaarggggghhh..." << std::endl;
}

// Announces

void Zombie::announce() const
{
	std::cout << "<" << this->_name << " (" << this->_type
			  << ")> Braiiiiiiinnnssss..." << std::endl;
}
/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/02 14:35:13 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/02 14:35:13 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

// Constructor

Zombie::Zombie()
{
	this->_type = "pumpdead";
}

// Destructor

Zombie::~Zombie()
{
	std::cout << "<" << this->_name << " (" << this->_type
			  << ")> Aaaaarggggghhh..." << std::endl;
}

// Setter

void	Zombie::setName(const std::string &name)
{
	this->_name = name;
}

// Announces

void	Zombie::announce() const
{
	std::cout << "<" << this->_name << " (" << this->_type
			  << ")> Braiiiiiiinnnssss..." << std::endl;
}
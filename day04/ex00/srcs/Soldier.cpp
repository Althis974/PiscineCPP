/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Soldier.cpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 11:45:34 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 11:45:34 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Soldier.hpp"

// Constructors

Soldier::Soldier() : Victim()
{
	std::cout << "I serve with honor!" << std::endl;
}

Soldier::Soldier(const std::string &name) : Victim(name)
{
	std::cout << "I serve with honor!" << std::endl;
}

// Copy constructor

Soldier::Soldier(const Soldier &src) : Victim(src)
{

}

// Destructor

Soldier::~Soldier()
{
	std::cout << "For the King..." << std::endl;
}

// Assignation operator overload

Soldier &			Soldier::operator=(const Soldier &rhs)
{
	Victim::operator=(rhs);

	return (*this);
}

// Suffer a fantastic spell

void			Soldier::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a call girl !"
			  << std::endl;
}
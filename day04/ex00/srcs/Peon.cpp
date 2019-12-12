/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Peon.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 10:24:15 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 10:24:15 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Peon.hpp"

// Constructors

Peon::Peon() : Victim()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const std::string &name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
}

// Copy constructor

Peon::Peon(const Peon &src) : Victim(src)
{

}

// Destructor

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

// Assignation operator overload

Peon &			Peon::operator= (const Peon &rhs)
{
	Victim::operator=(rhs);

	return (*this);
}

// Suffer a fantastic spell

void			Peon::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a pink pony !"
			  << std::endl;
}
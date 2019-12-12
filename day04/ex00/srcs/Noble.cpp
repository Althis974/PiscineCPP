/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Noble.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 11:58:09 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 11:58:09 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Noble.hpp"

// Constructors

Noble::Noble() : Victim()
{
	std::cout << "Get away from me, Satan's henchman!" << std::endl;
}

Noble::Noble(const std::string &name) : Victim(name)
{
	std::cout << "Get away from me, Satan's henchman!" << std::endl;
}

// Copy constructor

Noble::Noble(const Noble &src) : Victim(src)
{

}

// Destructor

Noble::~Noble()
{
	std::cout << "Dammit! All my gold..." << std::endl;
}

// Assignation operator overload

Noble &			Noble::operator= (const Noble &rhs)
{
	Victim::operator=(rhs);

	return (*this);
}

// Suffer a fantastic spell

void			Noble::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a peasant !"
			  << std::endl;
}
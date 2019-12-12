/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Victim.cpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 10:24:19 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 10:24:19 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Victim.hpp"

// Constructors

Victim::Victim() : _name("Jack")
{
	std::cout << "Some random victim called " << this->_name
			  << " just popped !" << std::endl;
}

Victim::Victim(const std::string &name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name
			  << " just popped !" << std::endl;
}

// Copy constructor

Victim::Victim(const Victim &src) : _name(src._name)
{

}

// Destructor

Victim::~Victim()
{
	std::cout << "Victim " << this->_name
			  << " just died for no apparent reason !" << std::endl;
}

// Assignation operator overload

Victim &			Victim::operator=(const Victim &rhs)
{
	this->_name = rhs._name;

	return (*this);
}

// Getter

std::string			Victim::getName() const
{
	return (this->_name);
}

// Setter

void				Victim::setName(const std::string &name)
{
	this->_name = name;
}

// Suffer a fantastic spell

void				Victim::getPolymorphed() const
{
	std::cout << this->_name << " has been turned into a cute little sheep !"
			  << std::endl;
}

// Insertion operator overload

std::ostream &		operator<< (std::ostream &out, const Victim &rhs)
{
	out << "I am " << rhs.getName() << " and I like otters ! "
		<< std::endl;

	return (out);
}
/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Sorcerer.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 10:24:23 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 10:24:23 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Sorcerer.hpp"

// Constructors

Sorcerer::Sorcerer(const std::string &name, const std::string &title) :
					_name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born !"
			  << std::endl;
}

// Copy constructor

Sorcerer::Sorcerer(const Sorcerer &src) : _name(src._name), _title(src._title)
{

}

// Destructor

Sorcerer::~Sorcerer()
{
	std::cout << this->_name << ", " << this->_title
			  << ", is dead. Consequences will never be the same !"
			  << std::endl;
}

// Assignation operator overload

Sorcerer &			Sorcerer::operator=(const Sorcerer &rhs)
{
	this->_name = rhs._name;
	this->_title = rhs._title;

	return (*this);
}

// Getters

std::string			Sorcerer::getName() const
{
	return (this->_name);
}

std::string			Sorcerer::getTitle() const
{
	return (this->_title);
}

// Setters

void				Sorcerer::setName(const std::string &name)
{
	this->_name = name;
}

void				Sorcerer::setTitle(const std::string &title)
{
	this->_title = title;
}

// Polymorph spell

void				Sorcerer::polymorph(const Victim &victim) const
{
	return (victim.getPolymorphed());
}

// Insertion operator overload

std::ostream &		operator<<(std::ostream &out, const Sorcerer &rhs)
{
	out << "I am " << rhs.getName() << ", " << rhs.getTitle()
		<< ", and I like ponies ! " << std::endl;

	return (out);
}
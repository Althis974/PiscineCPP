/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AMateria.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:25:22 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 15:25:22 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

// Constructors

AMateria::AMateria() : _type("fire"), _xp(0)
{

}

AMateria::AMateria(const std::string &type) : _type(type), _xp(0)
{

}

// Copy constructor

AMateria::AMateria(const AMateria &src) : _type(src._type), _xp(src._xp)
{

}

// Destructor

AMateria::~AMateria()
{

}

// Assignation operator overload

AMateria &				AMateria::operator=(const AMateria &rhs)
{
	this->_type = rhs._type;
	this->_xp = rhs._xp;

	return (*this);
}

// Getters

std::string const &		AMateria::getType() const
{
	return (this->_type);
}

unsigned int			AMateria::getXP() const
{
	return (this->_xp);
}
/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AsteroBocal.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 12:40:23 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 12:40:23 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/AsteroBocal.hpp"

// Constructor

AsteroBocal::AsteroBocal() : _name("AsteroBocal")
{

}

// Copy constructor

AsteroBocal::AsteroBocal(const AsteroBocal &src) : _name(src._name)
{

}

// Destructor

AsteroBocal::~AsteroBocal()
{

}

// Assignation operator overload

AsteroBocal &			AsteroBocal::operator=(const AsteroBocal &rhs)
{
	(void)rhs;

	return (*this);
}

// Getter

std::string				AsteroBocal::getName() const
{
	return (this->_name);
}

// Be mined

std::string				AsteroBocal::beMined(StripMiner *) const
{
	return ("Flavium");
}

std::string				AsteroBocal::beMined(DeepCoreMiner*) const
{
	return ("Thorite");
}


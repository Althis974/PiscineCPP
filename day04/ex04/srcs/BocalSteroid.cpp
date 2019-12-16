/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   BocalSteroid.cpp                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 12:40:27 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 12:40:27 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/BocalSteroid.hpp"

// Constructor

BocalSteroid::BocalSteroid() : _name("BocalSteroid")
{

}

// Copy constructor

BocalSteroid::BocalSteroid(const BocalSteroid &src) : _name(src._name)
{

}

// Destructor

BocalSteroid::~BocalSteroid()
{

}

// Assignation operator overload

BocalSteroid &		BocalSteroid::operator=(const BocalSteroid &rhs)
{
	(void)rhs;

	return (*this);
}

// Getter

std::string			BocalSteroid::getName() const
{
	return (this->_name);
}

// Be mined

std::string			BocalSteroid::beMined(StripMiner*) const
{
	return ("Krpite");
}

std::string			BocalSteroid::beMined(DeepCoreMiner*) const
{
	return ("Zazium");
}
/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   StripMiner.cpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 12:40:35 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 12:40:35 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/StripMiner.hpp"

// Constructor

StripMiner::StripMiner()
{

}

// Copy constructor

StripMiner::StripMiner(const StripMiner &src)
{
	*this = src;
}

// Destructor

StripMiner::~StripMiner()
{

}

// Assignation operator overload

StripMiner &		StripMiner::operator=(const StripMiner &rhs)
{
	(void)rhs;

	return (*this);
}

// Mine

void				StripMiner::mine(IAsteroid *asteroid)
{
	std::cout << " strip mining ... got " << asteroid->beMined(this) << " ! *"
			  << std::endl;
}
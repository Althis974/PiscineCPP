/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   DeepCoreMiner.cpp                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 12:40:31 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 12:40:31 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/DeepCoreMiner.hpp"

// Constructor

DeepCoreMiner::DeepCoreMiner()
{

}

// Copy constructor

DeepCoreMiner::DeepCoreMiner(const DeepCoreMiner &src)
{
	*this = src;
}

// Destructor

DeepCoreMiner::~DeepCoreMiner()
{

}

// Assignation operator overload

DeepCoreMiner &		DeepCoreMiner::operator=(const DeepCoreMiner &rhs)
{
	(void)rhs;

	return (*this);
}

// Mine

void				DeepCoreMiner::mine(IAsteroid *asteroid)
{
	std::cout << " mining deep ... got " << asteroid->beMined(this) << " ! *"
			  << std::endl;
}
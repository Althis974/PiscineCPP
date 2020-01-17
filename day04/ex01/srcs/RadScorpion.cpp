/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RadScorpion.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 15:40:29 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 15:40:29 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/RadScorpion.hpp"

// Constructor

RadScorpion::RadScorpion() : Enemy("RadScorpion", 80)
{
	std::cout << "* click click click *" << std::endl;
}

// Copy constructor

RadScorpion::RadScorpion(const RadScorpion &src) : Enemy(src)
{
	std::cout << "* click click click *" << std::endl;
}

// Destructor

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

// Assignation operator overload

RadScorpion &	RadScorpion::operator=(const RadScorpion &rhs)
{
	Enemy::operator=(rhs);

	return (*this);
}
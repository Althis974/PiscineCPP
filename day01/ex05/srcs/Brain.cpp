/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Brain.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/02 14:49:52 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/02 14:49:52 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

// Constructor

Brain::Brain()
{

}

// Destructor

Brain::~Brain()
{

}

// Identify

std::string		Brain::identify() const
{
	std::stringstream stringStream;

	stringStream << this;

	return (stringStream.str());
}
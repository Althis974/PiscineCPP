/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Human.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/02 14:49:07 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/02 14:49:07 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Human.hpp"

// Constructor

Human::Human()
{

}

// Destructor

Human::~Human()
{

}

// Getter

const Brain &		Human::getBrain() const
{
	return (this->_brain);
}

// Identify

std::string 		Human::identify() const
{
	return (this->_brain.identify());
}
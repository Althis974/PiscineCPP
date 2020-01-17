/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   MiningBarge.cpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 12:40:38 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 12:40:38 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/MiningBarge.hpp"

// Constructor

MiningBarge::MiningBarge() : _lasersNb(0)
{
	for (int i = 0; i < 4; ++i)
		this->_lasers[i] = nullptr;
}

MiningBarge::MiningBarge(const MiningBarge &src) : _lasersNb(src._lasersNb)
{
	for (int i = 0; i < 4; ++i)
		this->_lasers[i] = src._lasers[i];
}

// Destructor

MiningBarge::~MiningBarge()
{

}

// Assignation operator overload

MiningBarge &			MiningBarge::operator=(const MiningBarge &rhs)
{
	this->_lasersNb = rhs._lasersNb;
	for (int i = 0; i < 4; ++i)
		this->_lasers[i] = rhs._lasers[i];

	return (*this);
}

// Equip a laser

void				MiningBarge::equip(IMiningLaser *laser)
{
	if (this->_lasersNb < 4)
	{
		this->_lasers[this->_lasersNb] = laser;
		this->_lasersNb++;
	}
}

// Mine

void				MiningBarge::mine(IAsteroid *asteroid) const
{
	for (int i = 0 ;i < 4; ++i)
		if (this->_lasers[i])
			this->_lasers[i]->mine(asteroid);
}
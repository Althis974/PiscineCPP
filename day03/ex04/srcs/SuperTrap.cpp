/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   SuperTrap.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 16:14:20 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 16:14:20 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/SuperTrap.hpp"

// Constructor

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(name, 100,
		100, 120, 120,1, 60,
		20, 5), FragTrap(name), NinjaTrap(name)
{
	this->_setNameMessage = "Does this mean I can start dancing? ";
	this->_setNameMessage += "Pleeeeeeaaaaase?\n";
	this->_rangedAttackMessage = "I'm a tornado of death and bullets!";
	this->_meleeAttackMessage = "Hyperiooooon Punch!";
	this->_takeDamageMessage = "Get away from me!";
	this->_beRepairedMessage = "Ha ha ha! I LIVE! Hahaha!";

	std::cout << "<" << this->_name << "> ";
	std::cout << "Can I shoot something now? Or climb some stairs? ";
	std::cout << "SOMETHING exciting?\n" << std::endl;
}

// Copy constructor

SuperTrap::SuperTrap(const SuperTrap &src) : ClapTrap(src), FragTrap(src),
		NinjaTrap(src)
{
	this->_setNameMessage = "Does this mean I can start dancing? ";
	this->_setNameMessage += "Pleeeeeeaaaaase?\n";
	this->_rangedAttackMessage = "I'm a tornado of death and bullets!";
	this->_meleeAttackMessage = "Hyperiooooon Punch!";
	this->_takeDamageMessage = "Get away from me!";
	this->_beRepairedMessage = "Ha ha ha! I LIVE! Hahaha!";

	std::cout << "<" << this->_name << "> ";
	std::cout << "Can I shoot something now? Or climb some stairs? ";
	std::cout << "SOMETHING exciting?\n" << std::endl;
}

// Destructor

SuperTrap::~SuperTrap()
{
	std::cout << "<" << this->_name << "> Now? But I... I just... okay...\n"
			  << std::endl;
}

// Assignation operator overload

SuperTrap &		SuperTrap::operator= (const SuperTrap &rhs)
{
	ClapTrap::operator=(rhs);

	return (*this);
}


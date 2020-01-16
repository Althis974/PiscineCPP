/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScavTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 15:28:59 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/10 15:28:59 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

// Constructor

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, 100,
		100, 50, 50, 1, 20,
		15, 3)
{
	this->_setNameMessage = "New Directives: Wubwubwub. Dubstep dubstep. ";
	this->_setNameMessage += "Wubwubwubwub DROP! Dubstep!\n";
	this->_rangedAttackMessage = "WOW! I hit 'em!";
	this->_meleeAttackMessage = "Meet professor punch!";
	this->_takeDamageMessage = "You can't kill me!";
	this->_beRepairedMessage = "Healsies!";

	std::cout << "<" << this->_name << "> Directive one: Protect humanity! ";
	std::cout << "Directive two: Obey Jack at all costs. Directive three: ";
	std::cout << "Dance!\n" << std::endl;
}

// Copy constructor

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	this->_setNameMessage = "New Directives: Wubwubwub. Dubstep dubstep. ";
	this->_setNameMessage += "Wubwubwubwub DROP! Dubstep!\n";
	this->_rangedAttackMessage = "WOW! I hit 'em!";
	this->_meleeAttackMessage = "Meet professor punch!";
	this->_takeDamageMessage = "You can't kill me!";
	this->_beRepairedMessage = "Healsies!";

	std::cout << "<" << this->_name << "> Directive one: Protect humanity! ";
	std::cout << "Directive two: Obey Jack at all costs. Directive three: ";
	std::cout << "Dance!\n" << std::endl;
}

// Destructor

ScavTrap::~ScavTrap()
{
	std::cout << "<" << this->_name << "> The robot is dead,";
	std::cout << " long live the robot!\n" << std::endl;
}

// Assignation operator overload

ScavTrap &		ScavTrap::operator= (const ScavTrap &rhs)
{
	ClapTrap::operator=(rhs);

	return (*this);
}

// Challenge opponent

void			ScavTrap::challengeNewcomer(const std::string &target)
{
	if (this->_energy < 10)
	{
		std::cout << "<" << this->_name << "> Hnngh! Empty!" << std::endl;
		std::cout << "*not enough energy*\n" << std::endl;

		return;
	}

	this->_energy -= 10;

	std::cout << "<" << this->_name << "> I have an IDEA!\n" << std::endl;
	std::cout << "*" << this->_name << " challenges " << target << "*"
			  << std::endl;
	std::cout << ScavTrap::_ChallengesQuotes[std::rand() % 5] << "\n"
			  << std::endl;
}

// Challenges

std::string		ScavTrap::_ChallengesQuotes[5] = {
		"You versus me! Me versus you! Either way!",
		"I will prove to you my robotic superiority!",
		"Dance battle! Or, you know... regular battle.",
		"Man versus machine! Very tiny streamlined machine!",
		"Care to have a friendly duel?"
};
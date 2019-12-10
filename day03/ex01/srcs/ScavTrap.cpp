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

ScavTrap::ScavTrap(std::string const &name) : _name(name), _hitPts(100),
					_maxHitPts(100), _energy(50), _maxEnergy(50), _level(1),
					_meleeDamage(20), _rangedDamage(15), _armor(3)
{
	std::cout << "<" << this->_name << "> Directive one: Protect humanity! ";
	std::cout << "Directive two: Obey Jack at all costs. Directive three: ";
	std::cout << "Dance!\n" << std::endl;
}

// Copy constructor

ScavTrap::ScavTrap(const ScavTrap &src) : _name(src._name),
					_hitPts(src._hitPts), _maxHitPts(src._maxHitPts),
					_energy(src._energy), _maxEnergy(src._maxEnergy),
					_level(src._level), _meleeDamage(src._meleeDamage),
					_rangedDamage(src._rangedDamage), _armor(src._armor)
{
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

// Setter

void			ScavTrap::setName(std::string const &name)
{
	this->_name = name;
	std::cout << "<" << this->_name << "> New Directives: Wubwubwub. Dubstep ";
	std::cout << "dubstep. Wubwubwubwub DROP! Dubstep!\n" << std::endl;
}

// Assignation operator overload

ScavTrap &		ScavTrap::operator= (ScavTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hitPts = rhs._hitPts;
	this->_maxHitPts = rhs._maxHitPts;
	this->_energy = rhs._energy;
	this->_maxEnergy = rhs._maxEnergy;
	this->_level = rhs._level;
	this->_meleeDamage = rhs._meleeDamage;
	this->_rangedDamage = rhs._rangedDamage;
	this->_armor = rhs._armor;

	return (*this);
}

// Ranged attack

void			ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "<" << this->_name << "> WOW! I hit 'em!" << std::endl;
	std::cout << "*" << this->_name << " shoots " << target << " right in the";
	std::cout << " face causing " << this->_rangedDamage << " damage*\n"
			  << std::endl;
}

// Melee attack

void			ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "<" << this->_name << "> Meet professor punch!" << std::endl;
	std::cout << "*" << this->_name << " hits " << target << " right in the";
	std::cout << " face causing " << this->_meleeDamage << " damage*\n"
			  << std::endl;
}

// Suffer

void			ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "<" << this->_name << "> You can't kill me!" << std::endl;

	amount >= this->_armor ? amount -= this->_armor : amount = 0;

	amount = std::min(amount, this->_hitPts);

	std::cout << "*" << this->_name << " suffers " << amount << " damage*\n"
			  << std::endl;

	this->_hitPts >= amount ? this->_hitPts -= amount : this->_hitPts = 0;

}

// Repair

void			ScavTrap::beRepaired(unsigned int amount)
{
	amount = std::min(amount, this->_maxHitPts - this->_hitPts);

	std::cout << "<" << this->_name << "> Healsies!" << std::endl;
	std::cout << "*" << this->_name << " recovers " << amount
			  << " of its health*\n" << std::endl;

	this->_hitPts += amount;
}

// Challenge opponent

void			ScavTrap::challengeNewcomer(std::string const & target)
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
	std::cout << ScavTrap::_vaultHunterQuotes[std::rand() % 5] << "\n"
			  << std::endl;
}

// Challenges

std::string		ScavTrap::_vaultHunterQuotes[5] = {
		"You versus me! Me versus you! Either way!",
		"I will prove to you my robotic superiority!",
		"Dance battle! Or, you know... regular battle.",
		"Man versus machine! Very tiny streamlined machine!",
		"Care to have a friendly duel?",
};
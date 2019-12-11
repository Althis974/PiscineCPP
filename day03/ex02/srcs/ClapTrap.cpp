/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ClapTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 10:58:15 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 10:58:15 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

// Constructor

ClapTrap::ClapTrap(std::string const &name, unsigned int hitPts,
		unsigned int maxHitPts, unsigned int energy, unsigned int maxEnergy,
		unsigned int level, unsigned int meleeDamage, unsigned int rangedDamage,
		unsigned int armor) : _name(name), _hitPts(hitPts),
		_maxHitPts(maxHitPts), _energy(energy), _maxEnergy(maxEnergy),
		_level(level), _meleeDamage(meleeDamage), _rangedDamage(rangedDamage),
		_armor(armor)
{
	this->_setNameMessage = "I once started a revolution myself. There were ";
	this->_setNameMessage += "lots of guns and a lot of dying. You'd think I ";
	this->_setNameMessage += "would have gotten some better benefits out of ";
	this->_setNameMessage += "the whole thing but no, demoted back to ";
	this->_setNameMessage += "door-opening servitude!";
	this->_rangedAttackMessage = "Crit-i-cal!";
	this->_meleeAttackMessage = "Pain school is now in session";
	this->_takeDamageMessage = "No fair! I wasn't ready.";
	this->_beRepairedMessage = "Sweet life juice!";

	std::cout << "<" << this->_name << "> I can do more than open doors sir! ";
	std::cout << "We CL4P-TP units can be programmed to do anything from open ";
	std::cout << "doors to ninja-sassinate highly important Janitory ";
	std::cout << "officals!\n" << std::endl;
}

// Copy constructor

ClapTrap::ClapTrap(const ClapTrap &src) : _name(src._name),
					_hitPts(src._hitPts), _maxHitPts(src._maxHitPts),
					_energy(src._energy), _maxEnergy(src._maxEnergy),
					_level(src._level), _meleeDamage(src._meleeDamage),
					_rangedDamage(src._rangedDamage), _armor(src._armor)
{
	this->_setNameMessage = "I once started a revolution myself. There were ";
	this->_setNameMessage += "lots of guns and a lot of dying. You'd think I ";
	this->_setNameMessage += "would have gotten some better benefits out of ";
	this->_setNameMessage += "the whole thing but no, demoted back to ";
	this->_setNameMessage += "door-opening servitude!";
	this->_rangedAttackMessage = "Crit-i-cal!";
	this->_meleeAttackMessage = "Pain school is now in session";
	this->_takeDamageMessage = "No fair! I wasn't ready.";
	this->_beRepairedMessage = "Sweet life juice!";

	std::cout << "<" << this->_name << "> I can do more than open doors sir! ";
	std::cout << "We CL4P-TP units can be programmed to do anything from open ";
	std::cout << "doors to ninja-sassinate highly important Janitory ";
	std::cout << "officals!\n" << std::endl;
}

// Destructor

ClapTrap::~ClapTrap()
{
	std::cout << "<" << this->_name << "> No, nononono NO!\n" << std::endl;
}

// Setter

void			ClapTrap::setName(std::string const &name)
{
	this->_name = name;
	std::cout << "<" << this->_name << "> " << this->_setNameMessage
			  << std::endl;
}

// Assignation operator overload

ClapTrap &		ClapTrap::operator= (ClapTrap const &rhs)
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

void			ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "<" << this->_name << "> "<< this->_rangedAttackMessage
			  << std::endl;
	std::cout << "*" << this->_name << " shoots " << target << " right in the";
	std::cout << " face causing " << this->_rangedDamage << " damage*\n"
			  << std::endl;
}

// Melee attack

void			ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "<" << this->_name << "> " << this->_meleeAttackMessage
			  << std::endl;
	std::cout << "*" << this->_name << " hits " << target << " right in the";
	std::cout << " face causing " << this->_meleeDamage << " damage*\n"
			  << std::endl;
}

// Suffer

void			ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "<" << this->_name << "> " << this->_takeDamageMessage
			  << std::endl;

	amount >= this->_armor ? amount -= this->_armor : amount = 0;

	amount = std::min(amount, this->_hitPts);

	std::cout << "*" << this->_name << " suffers " << amount << " damage*\n"
			  << std::endl;

	this->_hitPts >= amount ? this->_hitPts -= amount : this->_hitPts = 0;
}

// Repair

void			ClapTrap::beRepaired(unsigned int amount)
{
	amount = std::min(amount, this->_maxHitPts - this->_hitPts);

	std::cout << "<" << this->_name << "> " << this->_beRepairedMessage
			  << std::endl;
	std::cout << "*" << this->_name << " recovers " << amount
			  << " of its health*\n" << std::endl;

	this->_hitPts += amount;
}
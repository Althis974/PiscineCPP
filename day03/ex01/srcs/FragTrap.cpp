/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   FragTrap.cpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 15:27:16 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/10 15:27:16 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

// Constructor

FragTrap::FragTrap(std::string const &name) : _name(name), _hitPts(100),
					_maxHitPts(100), _energy(100), _maxEnergy(100), _level(1),
					_meleeDamage(30), _rangedDamage(20), _armor(5)
{
	std::cout << "<" << this->_name << "> ";
	std::cout << "Booting sequence complete. Hello! I am your new steward bot.";
	std::cout << " Designation: " << this->_name << ", Hyperion Robot, Class";
	std::cout << " C. Please adjust factory settings to meet your needs before";
	std::cout << " deployment.\n" << std::endl;
}

// Copy constructor

FragTrap::FragTrap(const FragTrap &src) : _name(src._name),
					_hitPts(src._hitPts), _maxHitPts(src._maxHitPts),
					_energy(src._energy), _maxEnergy(src._maxEnergy),
					_level(src._level), _meleeDamage(src._meleeDamage),
					_rangedDamage(src._rangedDamage), _armor(src._armor)
{
	std::cout << "<" << this->_name << "> ";
	std::cout << "Booting sequence complete. Hello! I am your new steward bot.";
	std::cout << " Designation: " << this->_name << ", Hyperion Robot, Class";
	std::cout << " C. Please adjust factory settings to meet your needs before";
	std::cout << " deployment.\n" << std::endl;
}

// Destructor

FragTrap::~FragTrap()
{
	std::cout << "<" << this->_name << "> Argh arghargh death gurgle";
	std::cout << " gurglegurgle urgh... death.\n" << std::endl;
}

// Setter

void			FragTrap::setName(std::string const &name)
{
	this->_name = name;
	std::cout << "<" << this->_name << "> New Designation: ";
	std::cout << this->_name << ", Hyperion Robot, Class C.\n" << std::endl;
}

// Assignation operator overload

FragTrap &		FragTrap::operator= (FragTrap const &rhs)
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

void			FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "<" << this->_name << "> That looks like it hurts!"
			  << std::endl;
	std::cout << "*" << this->_name << " shoots " << target << " right in the";
	std::cout << " face causing " << this->_rangedDamage << " damage*\n"
			  << std::endl;
}

// Melee attack

void			FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "<" << this->_name << "> Ready for the PUNCHline?!"
			  << std::endl;
	std::cout << "*" << this->_name << " hits " << target << " right in the";
	std::cout << " face causing " << this->_meleeDamage << " damage*\n"
			  << std::endl;
}

// Suffer

void			FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "<" << this->_name << "> I'm too pretty to die!" << std::endl;

	amount >= this->_armor ? amount -= this->_armor : amount = 0;

	amount = std::min(amount, this->_hitPts);

	std::cout << "*" << this->_name << " suffers " << amount << " damage*\n"
			  << std::endl;

	this->_hitPts >= amount ? this->_hitPts -= amount : this->_hitPts = 0;
}

// Repair

void			FragTrap::beRepaired(unsigned int amount)
{
	amount = std::min(amount, this->_maxHitPts - this->_hitPts);

	std::cout << "<" << this->_name << "> Health! Eww, what flavor is red?"
			  << std::endl;
	std::cout << "*" << this->_name << " recovers " << amount
			  << " of its health*\n" << std::endl;

	this->_hitPts += amount;
}

// Action Packages activating

void			FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (this->_energy < 25)
	{
		std::cout << "<" << this->_name << "> Dangit, I'm out!" << std::endl;
		std::cout << "*not enough energy*\n" << std::endl;
		return;
	}
	this->_energy -= 25;
	std::cout << "<" << this->_name << "> This time it'll be awesome, ";
	std::cout << "I promise!\n" << std::endl;
	std::cout << "*" << this->_name << " activates VaultHunter.EXE on "
			  << target << "*" << std::endl;
	std::cout << FragTrap::_vaultHunterQuotes[std::rand() % 15] << "\n"
			  << std::endl;
}

//Action Packages

std::string		FragTrap::_vaultHunterQuotes[15] = {
		"[Funzerker] I'm a sexy dinosaur! Rawr!",
		"[Meat Unicycle] I AM ON FIRE!!! OH GOD, PUT ME OUT!!!",
		"[Shhhhh...trap] I'm a robot ninja...",
		"[Blightbot] Mini-trap, pretend you're a Siren!",
		"[Mechromagician] Anarchy and mini-trap and awesomeness, oh my!",
		"[Miniontrap] I'm going commando!",
		"[Rubber Ducky] I am rubber, and you are so dead!",
		"[Senseless Sacrifice] For you...I commit...seddoku...",
		"[Medbot] Nurse Clap is here!",
		"[Clap-in-the-Box] Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY!",
		"[Gun Wizard] You can call me Gundalf!",
		"[One Shot Wonder] One shot, make it count!",
		"[Laser Inferno] Laaasers!",
		"[Torgue Fiesta] I brought you a present: EXPLOSIONS!",
		"[Pirate Ship Mode] Time to get swabby!"
};
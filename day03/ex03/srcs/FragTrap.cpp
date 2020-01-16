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

FragTrap::FragTrap(const std::string &name) : ClapTrap(name, 100,
		100, 100, 100,1, 30,
		20, 5)
{
	this->_setNameMessage = "New Designation: " + this->_name
							+ ", Hyperion Robot, Class C.\n";
	this->_rangedAttackMessage = "That looks like it hurts!";
	this->_meleeAttackMessage = "Ready for the PUNCHline?!";
	this->_takeDamageMessage = "I'm too pretty to die!";
	this->_beRepairedMessage = "Health! Eww, what flavor is red?";

	std::cout << "<" << this->_name << "> ";
	std::cout << "Booting sequence complete. Hello! I am your new steward bot.";
	std::cout << " Designation: " << this->_name << ", Hyperion Robot, Class";
	std::cout << " C. Please adjust factory settings to meet your needs before";
	std::cout << " deployment.\n" << std::endl;
}

// Copy constructor

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	this->_setNameMessage = "New Designation: " + this->_name
							+ ", Hyperion Robot, Class C.\n";
	this->_rangedAttackMessage = "That looks like it hurts!";
	this->_meleeAttackMessage = "Ready for the PUNCHline?!";
	this->_takeDamageMessage = "I'm too pretty to die!";
	this->_beRepairedMessage = "Health! Eww, what flavor is red?";

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

// Assignation operator overload

FragTrap &		FragTrap::operator= (const FragTrap &rhs)
{
	ClapTrap::operator=(rhs);

	return (*this);
}

// Action Packages activating

void			FragTrap::vaulthunter_dot_exe(const std::string &target)
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
/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   NinjaTrap.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 14:53:21 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 14:53:21 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/NinjaTrap.hpp"

// Constructor

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(name, 60,
		60, 120, 120, 1, 60,
		5, 0)
{
	this->_setNameMessage = "Oh. My. God. What if I'm like... a fish? And, if ";
	this->_setNameMessage += "I'm not moving... I stop breathing? AND THEN ";
	this->_setNameMessage += "I'LL DIE! HELP ME! HELP MEEEEE HEE HEE HEEE! ";
	this->_setNameMessage += "HHHHHHHELP!";
	this->_rangedAttackMessage = "Present for you!";
	this->_meleeAttackMessage = "In yo' FACE!";
	this->_takeDamageMessage = "Crap happens.";
	this->_beRepairedMessage = "Health over here!";

	std::cout << "<" << this->_name << "> It's really quiet... and lonely... ";
	std::cout << "(hums briefly) Also this 'stopped moving' thing makes me ";
	std::cout << "uncomfortable. It gives me time to stop and think... ";
	std::cout << "literally. I'VE STOPPED, AND I'M THINKING! IT HURTS ME!\n"
			  << std::endl;
}

// Copy constructor

NinjaTrap::NinjaTrap(const NinjaTrap &src) : ClapTrap(src)
{
	this->_setNameMessage = "Oh. My. God. What if I'm like... a fish? And, if ";
	this->_setNameMessage += "I'm not moving... I stop breathing? AND THEN ";
	this->_setNameMessage += "I'LL DIE! HELP ME! HELP MEEEEE HEE HEE HEEE! ";
	this->_setNameMessage += "HHHHHHHELP!\n";
	this->_rangedAttackMessage = "Present for you!";
	this->_meleeAttackMessage = "In yo' FACE!";
	this->_takeDamageMessage = "Crap happens.";
	this->_beRepairedMessage = "Health over here!";

	std::cout << "<" << this->_name << "> It's really quiet... and lonely... ";
	std::cout << "(hums briefly) Also this 'stopped moving' thing makes me ";
	std::cout << "uncomfortable. It gives me time to stop and think... ";
	std::cout << "literally. I'VE STOPPED, AND I'M THINKING! IT HURTS ME!\n"
			  << std::endl;
}

// Destructor

NinjaTrap::~NinjaTrap()
{
	std::cout << "<" << this->_name << "> I have many regrets!\n" << std::endl;
}

// Assignation operator overload

NinjaTrap &		NinjaTrap::operator=(const NinjaTrap &rhs)
{
	ClapTrap::operator=(rhs);

	return (*this);
}

// Trap a ClapTrap

void			NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	if (this->_energy < 30)
	{
		std::cout << "<" << this->_name << "> Crap, no more shots left!"
				  << std::endl;
		std::cout << "*not enough energy*\n" << std::endl;

		return;
	}

	this->_energy -= 30;

	std::cout << "<" << this->_name << "> "
			  << NinjaTrap::_NinjaQuotes[std::rand() % 5] << std::endl;
	std::cout << "*" << this->_name << " shoeboxes "
			  << target.getName() << "*\n" << std::endl;

	std::cout << "      ,\n"
				 "       |\n"
				 "    ]  |.-._\n"
				 "     \\|\"(0)\"| _]\n"
				 "     `|=\\#/=|\\/\n"
				 "      :  _  :\n"
				 "       \\/_\\/ \n"
				 "        |=| \n"
				 "        `-'\n" << std::endl;
}

// Trap a FragTrap

void			NinjaTrap::ninjaShoebox(FragTrap &target)
{
	if (this->_energy < 30)
	{
		std::cout << "<" << this->_name << "> Crap, no more shots left!"
				  << std::endl;
		std::cout << "*not enough energy*\n" << std::endl;

		return;
	}

	this->_energy -= 30;

	std::cout << "<" << this->_name << "> "
			  << NinjaTrap::_NinjaQuotes[std::rand() % 5] << std::endl;
	std::cout << "*" << this->_name << " shoeboxes "
			  << target.getName() << "*\n" << std::endl;

	std::cout << "      ,\n"
				 "   ,   |\n"
				 "  ⬤]  |.-._    ______.\n"
				 "     \\|\"(0)\"| ~(_]----'\n"
				 "     `|=\\#/=|\\/_(\n"
				 "      :  _  :\n"
				 "       \\/_\\/\n"
				 "        |=|\n"
				 "        `-'\n" << std::endl;
}

// Trap a ScavTrap

void			NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	if (this->_energy < 30)
	{
		std::cout << "<" << this->_name << "> Crap, no more shots left!"
				  << std::endl;
		std::cout << "*not enough energy*\n" << std::endl;

		return;
	}

	this->_energy -= 30;

	std::cout << "<" << this->_name << "> "
			  << NinjaTrap::_NinjaQuotes[std::rand() % 5]<< std::endl;
	std::cout << "*" << this->_name << " shoeboxes "
			  << target.getName() << "*\n" << std::endl;

	std::cout << "     ︵  ,   ︵\n"
				 "     \\\\  |  //\n"
				 "   ]  \\\\.|.//\n"
				 "    \\⌿|\"(0)\"|⍀ _]\n"
				 "     `|=\\#/=|\\/\n"
				 "      :  _  :\n"
				 "       \\/_\\/\n"
				 "        |=|\n"
				 "        `-'\n" << std::endl;
}

// Trap a NinjaTrap

void			NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	if (this->_energy < 30)
	{
		std::cout << "<" << this->_name << "> Crap, no more shots left!"
				  << std::endl;
		std::cout << "*not enough energy*\n" << std::endl;

		return;
	}

	this->_energy -= 30;

	std::cout << "<" << this->_name << "> "
			  << NinjaTrap::_NinjaQuotes[std::rand() % 5] << std::endl;
	std::cout << "*" << this->_name << " shoeboxes "
			  << target.getName() << "*\n" << std::endl;

	std::cout << "  ⊿]\n"
				 "  ||\n"
				 "  ||  ,\n"
				 " _||_  |\n"
				 " `--ʹ  |.-._\n"
				 "  ||] |=====|\n"
				 "   . \\|\"(0)\"| ✧_]\n"
				 "     `|=\\#/=|\\/\n"
				 "      :  _  :\n"
				 "       \\/_\\/\n"
				 "        |=|\n"
				 "        `-'\n" << std::endl;
}

// Talk like ninja

std::string		NinjaTrap::_NinjaQuotes[5] = {
		"I'm cloaking...",
		"Roses are red and/Violets are blue/Wait... how many syllables was that?",
		"Shoot him... he's the real one...",
		"I'm a robot ninja...",
		"I'm invisible!"
};
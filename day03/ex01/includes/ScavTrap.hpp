/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ScavTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 15:29:05 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/10 15:29:05 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>

class ScavTrap
{

public:

	// Constructor
	ScavTrap(std::string const &name);

	// Copy constructor
	ScavTrap(const ScavTrap &src);

	// Destructor
	~ScavTrap();

	// Setter
	void			setName(std::string const &name);

	// Assignation operator overload
	ScavTrap &		operator=(ScavTrap const &rhs);

	// Ranged attack
	void			rangedAttack(std::string const &target);

	// Melee attack
	void			meleeAttack(std::string const &target);

	// Take damage
	void			takeDamage(unsigned int amount);

	// Repair
	void			beRepaired(unsigned int amount);

	// Challenge opponent
	void			challengeNewcomer(std::string const & target);

private:

	std::string		_name;
	unsigned int	_hitPts;
	unsigned int	_maxHitPts;
	unsigned int	_energy;
	unsigned int	_maxEnergy;
	unsigned int	_level;
	unsigned int	_meleeDamage;
	unsigned int	_rangedDamage;
	unsigned int	_armor;

	static std::string _vaultHunterQuotes[5];

};


#endif //SCAVTRAP_HPP

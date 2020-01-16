/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   FragTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 11:16:37 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/10 11:16:37 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>

class FragTrap
{

public:

	// Constructor
	FragTrap(const std::string &name);

	// Copy constructor
	FragTrap(const FragTrap &src);

	// Destructor
	~FragTrap();

	// Setter
	void					setName(const std::string &name);

	// Assignation operator overload
	FragTrap &				operator=(const FragTrap &rhs);

	// Ranged attack
	void					rangedAttack(const std::string &target);

	// Melee attack
	void					meleeAttack(const std::string &target);

	// Take damage
	void					takeDamage(unsigned int amount);

	// Repair
	void					beRepaired(unsigned int amount);

	// Action Packages activating
	void					vaulthunter_dot_exe(const std::string &target);

private:

	std::string				_name;
	unsigned int			_hitPts;
	unsigned int			_maxHitPts;
	unsigned int			_energy;
	unsigned int			_maxEnergy;
	unsigned int			_level;
	unsigned int			_meleeDamage;
	unsigned int			_rangedDamage;
	unsigned int			_armor;

	static std::string		_vaultHunterQuotes[15];
};


#endif //FRAGTRAP_HPP

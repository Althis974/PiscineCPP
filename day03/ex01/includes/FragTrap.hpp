/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   FragTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/10 15:27:19 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/10 15:27:19 by rlossy      ###    #+. /#+    ###.fr     */
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
	FragTrap(std::string const &name);

	// Copy constructor
	FragTrap(const FragTrap &src);

	// Destructor
	~FragTrap();

	// Setter
	void			setName(std::string const &name);

	// Assignation operator overload
	FragTrap &		operator=(FragTrap const &rhs);

	// Ranged attack
	void			rangedAttack(std::string const &target);

	// Melee attack
	void			meleeAttack(std::string const &target);

	// Take damage
	void			takeDamage(unsigned int amount);

	// Repair
	void			beRepaired(unsigned int amount);

	// Action Packages activating
	void			vaulthunter_dot_exe(std::string const &target);

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

	static std::string _vaultHunterQuotes[15];
};


#endif //FRAGTRAP_HPP

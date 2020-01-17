/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ClapTrap.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 10:57:57 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 10:57:57 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{

public:

	// Constructors
	ClapTrap();
	ClapTrap(const std::string &name, unsigned int hitPts,
			 unsigned int maxHitPts, unsigned int energy,
			 unsigned int maxEnergy, unsigned int level,
			 unsigned int meleeDamage, unsigned int rangedDamage,
			 unsigned int armor);

	// Copy constructor
	ClapTrap(const ClapTrap &src);

	// Destructor
	virtual ~ClapTrap();

	// Setter
	void			setName(const std::string &name);

	// Assignation operator overload
	ClapTrap &		operator=(const ClapTrap &rhs);

	// Ranged attack
	void			rangedAttack(const std::string &target);

	// Melee attack
	void			meleeAttack(const std::string &target);

	// Take damage
	void			takeDamage(unsigned int amount);

	// Repair
	void			beRepaired(unsigned int amount);

protected:

	std::string		_name;
	std::string		_setNameMessage;
	std::string		_rangedAttackMessage;
	std::string		_meleeAttackMessage;
	std::string		_takeDamageMessage;
	std::string		_beRepairedMessage;
	unsigned int	_hitPts;
	unsigned int	_maxHitPts;
	unsigned int	_energy;
	unsigned int	_maxEnergy;
	unsigned int	_level;
	unsigned int	_meleeDamage;
	unsigned int	_rangedDamage;
	unsigned int	_armor;
};


#endif //CLAPTRAP_HPP

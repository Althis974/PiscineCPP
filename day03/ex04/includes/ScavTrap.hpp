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

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

public:

	// Constructor
	ScavTrap(std::string const &name);

	// Copy constructor
	ScavTrap(const ScavTrap &src);

	// Destructor
	virtual ~ScavTrap();

	// Assignation operator overload
	ScavTrap &			operator=(ScavTrap const &rhs);

	// Challenge opponent
	void				challengeNewcomer(std::string const & target);

private:

	static std::string	_ChallengesQuotes[5];
};


#endif //SCAVTRAP_HPP

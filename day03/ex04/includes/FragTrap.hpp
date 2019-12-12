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

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public:

	// Constructor
	FragTrap(std::string const &name);

	// Copy constructor
	FragTrap(const FragTrap &src);

	// Destructor
	virtual ~FragTrap();

	// Assignation operator overload
	FragTrap &			operator=(FragTrap const &rhs);

	// Action Packages activating
	void				vaulthunter_dot_exe(std::string const &target);

protected:

	static std::string	_vaultHunterQuotes[15];
};


#endif //FRAGTRAP_HPP

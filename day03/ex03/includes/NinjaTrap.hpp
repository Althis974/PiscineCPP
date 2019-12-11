/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   NinjaTrap.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/11 14:53:10 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/11 14:53:10 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP


#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{

public:

	// Constructor
	NinjaTrap(std::string const &name);

	// Copy constructor
	NinjaTrap(const NinjaTrap &src);

	// Destructor
	~NinjaTrap();

	// Assignation operator overload
	NinjaTrap &			operator=(NinjaTrap const &rhs);

	// Trap a NinjaTrap
	void				ninjaShoebox(NinjaTrap & target);

	// Trap a ClapTrap
	void				ninjaShoebox(ClapTrap & target);

	// Trap a FragTrap
	void				ninjaShoebox(FragTrap & target);

	// Trap a ScavTrap
	void				ninjaShoebox(ScavTrap & target);

private:

	static std::string	_NinjaQuotes[5];
};


#endif //NINJATRAP_HPP

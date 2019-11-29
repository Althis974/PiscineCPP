/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/29 16:09:44 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/29 16:09:44 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{

public:

	// Constructor
	Zombie(std::string const &name, std::string const &type);

	// Destructor
	~Zombie();

	// Announces
	void		announce() const;

private:

	std::string _name;
	std::string _type;
};



#endif //ZOMBIE_HPP

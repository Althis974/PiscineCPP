/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Zombie.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/02 14:35:06 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/02 14:35:06 by rlossy      ###    #+. /#+    ###.fr     */
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
	Zombie();

	// Destructor
	~Zombie();

	// Setter
	void		setName(std::string &name);

	// Announces
	void		announce() const;

private:

	std::string _name;
	std::string _type;
};



#endif //ZOMBIE_HPP

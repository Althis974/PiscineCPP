/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Weapon.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/03 17:00:05 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/03 17:00:05 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{

public:

	// Constructor
	Weapon(std::string const &type);

	// Destructor
	~Weapon();

	// Setter
	void setType(std::string const &type);

	// Getter
	std::string getType() const;

private:

	std::string _type;
};


#endif //WEAPON_HPP

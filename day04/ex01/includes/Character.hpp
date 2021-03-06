/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Character.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 15:50:05 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 15:50:05 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>
#include <string>

class Character
{

public:

	// Constructors
	Character();
	Character(const std::string &name);

	// Copy constructor
	Character(const Character &src);

	// Destructor
	~Character();

	// Assignation operator overload
	Character &		operator=(const Character &rhs);

	// Getters
	std::string		getName() const;
	int 			getAP() const;
	AWeapon *		getWeapon() const;

	// Recover AP
	void			recoverAP();

	// Equip weapon
	void			equip(AWeapon *weapon);

	// Attack
	void			attack(Enemy *enemy);

private:

	std::string		_name;
	int				_AP;
	AWeapon *		_weapon;
};

// Insertion operator overload
std::ostream &		operator<<(std::ostream &out, const Character &rhs);


#endif //CHARACTER_HPP

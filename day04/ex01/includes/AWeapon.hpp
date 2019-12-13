/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AWeapon.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 13:45:01 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 13:45:01 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{

public:

	// Constructors
	AWeapon();

	AWeapon(const std::string &name, int APCost, int damage);

	// Copy constructor
	AWeapon(const AWeapon &src);

	// Destructor
	virtual				~AWeapon();

	// Assignation operator overload
	AWeapon &			operator= (const AWeapon &rhs);

	// Getters
	std::string			getName() const;
	int					getAPCost() const;
	int					getDamage() const;

	// Attack
	virtual void		attack() const = 0;

protected:

	std::string			_name;
	int					_APCost;
	int					_damage;
};


#endif //AWEAPON_HPP

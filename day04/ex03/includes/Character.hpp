/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Character.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:27:36 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 15:27:36 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Character : public ICharacter
{

public:

	// Constructors
	Character();
	Character(const std::string &name);

	// Copy constructor
	Character(const Character &src);

	// Destructor
	virtual ~Character();

	// Assignation operator overload
	Character &						operator=(const Character &rhs);

	// Getter
	virtual const std::string &		getName() const;

	// Equip a materia
	virtual void					equip(AMateria *materia);

	// Unequip materia but doest't destroy it
	virtual void					unequip(int idx);

	// Use a materia
	virtual void                	use(int idx, ICharacter &target);

private:

	std::string						_name;
	int								_index;
	AMateria *						_inventory[4];
};


#endif //CHARACTER_HPP

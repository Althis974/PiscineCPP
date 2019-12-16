/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ICharacter.hpp                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:25:25 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 15:25:25 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

# include <string>
# include "AMateria.hpp"

class AMateria;

class ICharacter
{

public:

	virtual ~ICharacter() {}
	virtual std::string const &		getName() const = 0;
	virtual void					equip(AMateria *m) = 0;
	virtual void					unequip(int idx) = 0;
	virtual void					use(int idx, ICharacter &target) = 0;
};

#endif //ICHARACTER_HPP

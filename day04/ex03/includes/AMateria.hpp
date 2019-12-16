/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   AMateria.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:28:20 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 15:28:20 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class AMateria
{

public:

	// Constructors
	AMateria();
	AMateria(const std::string &type);

	// Copy constructor
	AMateria(const AMateria &src);

	// Destructor
	virtual ~AMateria();

	// Assignation operator overlaod
	AMateria &				operator=(const AMateria &rhs);

	// Getters
	std::string const &		getType() const;
	unsigned int			getXP() const;

	// Returns a new instance of materia
	virtual AMateria *		clone() const = 0;

	// Use materia and increase xp
	virtual void			use(ICharacter& target) = 0;

protected:

	std::string				_type;
	unsigned int			_xp;
};


#endif //AMATERIA_HPP

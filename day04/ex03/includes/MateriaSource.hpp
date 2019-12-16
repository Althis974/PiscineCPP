/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   MateriaSource.hpp                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 15:27:50 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 15:27:50 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource
{

public:

	// Constructor
	MateriaSource();

	// Copy constructor
	MateriaSource(const MateriaSource &src);

	// Destructor
	virtual ~MateriaSource();

	// Assignation operator overload
	MateriaSource &			operator=(const MateriaSource &rhs);

	// Learn a materia
	virtual void			learnMateria(AMateria *m);

	// Create a materia
	virtual AMateria *		createMateria(const std::string &type);

private:

	int					_index;
	AMateria *			_inventory[4];
};


#endif //MATERIASOURCE_HPP

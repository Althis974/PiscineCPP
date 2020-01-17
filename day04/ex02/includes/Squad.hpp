/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Squad.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 09:59:37 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 09:59:37 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>

class	Squad : public ISquad
{
	typedef struct				s_marinesList
	{
		ISpaceMarine 			*marine;
		struct s_marinesList	*next;
	}							t_marinesList;

public:

	// Constructor
	Squad();

	// Copy constructor
	Squad(const Squad &src);

	// Destructor
	virtual ~Squad();

	// Assignation operator overload
	Squad &						operator=(const Squad &rhs);

	// Getters
	int							getCount() const;
	ISpaceMarine *				getUnit(int n) const;

	// Add a unit to the end of squad
	int							push(ISpaceMarine *marine);

private:

	int							_unitsNb;
	t_marinesList *				_marines;


	// Check if unit is already in the squad
	bool						checkUnit(ISpaceMarine *marine,
										  t_marinesList *squad);
	//	Copy marinesList
	void						copyMarinesList(const Squad &src);

	//	Destroy marinesList
	void						destroyMarinesList();
};


#endif //SQUAD_HPP

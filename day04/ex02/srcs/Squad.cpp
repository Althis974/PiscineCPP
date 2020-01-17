/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Squad.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 10:00:03 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 10:00:03 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Squad.hpp"

// Constructor

Squad::Squad() : _unitsNb(0), _marines(nullptr)
{

}

// Copy constructor

Squad::Squad(const Squad &src) : _unitsNb(src._unitsNb), _marines(nullptr)
{
	copyMarinesList(src);
}

// Destructor

Squad::~Squad()
{
	this->destroyMarinesList();
}

// Assignation operator overload

Squad &				Squad::operator=(const Squad &rhs)
{
	this->_unitsNb = rhs._unitsNb;
	this->destroyMarinesList();
	this->copyMarinesList(rhs);

	return (*this);
}

// Add a unit to the end of squad

int					Squad::push(ISpaceMarine *marine)
{
	t_marinesList  *tmp;

	tmp = this->_marines;
	if (marine && !this->checkUnit(marine, tmp))
	{
		if (this->_marines)
		{
			while (tmp->next)
				tmp = tmp->next;

			tmp->next = new t_marinesList;
			tmp->next->marine = marine;
			tmp->next->next = nullptr;
		}
		else
		{
			this->_marines = new t_marinesList;
			this->_marines->marine = marine;
			this->_marines->next = nullptr;
		}
		this->_unitsNb++;
	}

	return (this->_unitsNb);
}

// Getters

int					Squad::getCount() const
{
	return (this->_unitsNb);
}

ISpaceMarine *		Squad::getUnit(int n) const
{
	t_marinesList  *tmp;

	if (!this->_marines)
		return (nullptr);

	tmp = this->_marines;

	if (n < 0 || n >= this->_unitsNb)
		return (nullptr);

	while (n--)
		tmp = tmp->next;

	return (tmp->marine);
}

// Check if unit is already in the squad

bool				Squad::checkUnit(ISpaceMarine *marine, t_marinesList *squad)
{
	if (!squad)
		return (false);
	else if (marine == squad->marine)
		return (true);
	else
		return (this->checkUnit(marine, squad->next));
}

//	Copy marinesList

void				Squad::copyMarinesList(const Squad &src)
{
	for (int i = 0; i < src.getCount(); ++i)
		push(src.getUnit(i));
}

//	Destroy marinesList

void				Squad::destroyMarinesList()
{
	t_marinesList  *tmp;

	if (this->_marines)
	{
		delete this->_marines->marine;

		tmp = this->_marines;

		this->_marines = this->_marines->next;

		delete tmp;

		return (this->destroyMarinesList());
	}
}

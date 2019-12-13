/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ISquad.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 09:58:21 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 09:58:21 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
#define ISQUAD_HPP

#include "ISpaceMarine.hpp"

class	ISquad
{

public:

	virtual ~ISquad() {}
	virtual int				getCount() const = 0;
	virtual ISpaceMarine*	getUnit(int) const = 0;
	virtual int				push(ISpaceMarine*) = 0;

};

#endif //ISQUAD_HPP

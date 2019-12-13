/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ISpaceMarine.hpp                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/13 09:58:25 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/13 09:58:25 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP

class	ISpaceMarine
{

public:

	virtual ~ISpaceMarine() {}
	virtual ISpaceMarine* 	clone() const = 0;
	virtual void 			battleCry() const = 0;
	virtual void 			rangedAttack() const = 0;
	virtual void 			meleeAttack() const = 0;

};

#endif //ISPACEMARINE_HPP

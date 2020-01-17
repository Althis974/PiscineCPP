/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   IMiningLaser.hpp                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 12:40:43 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 12:40:43 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef IMININGLASER_HPP
#define IMININGLASER_HPP

#include "IAsteroid.hpp"

class	IMiningLaser
{

public:

	virtual ~IMiningLaser() {}
	virtual void mine(IAsteroid*) = 0;
};


#endif //IMININGLASER_HPP

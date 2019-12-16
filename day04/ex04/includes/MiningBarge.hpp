/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   MiningBarge.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/16 12:41:49 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/16 12:41:49 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
#define MININGBARGE_HPP

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class MiningBarge
{

public:

	// Constructor
	MiningBarge();

	// Copy constructor
	MiningBarge(const MiningBarge &src);

	// Destructor
	~MiningBarge();

	// Assignation operator overload
	MiningBarge &			operator=(const MiningBarge &rhs);

	// Equip a laser
	void					equip(IMiningLaser*);

	// Mine
	void					mine(IAsteroid*) const;

private:

	int						_lasersNb;
	IMiningLaser *			_lasers[4];
};


#endif //MININGBARGE_HPP

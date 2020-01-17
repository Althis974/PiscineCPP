/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   RadScorpion.hpp                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 15:40:25 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 15:40:25 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

# include "Enemy.hpp"
# include <iostream>
# include <string>

class RadScorpion : public Enemy
{

public:

	// Constructor
	RadScorpion();

	// Copy constructor
	RadScorpion(const RadScorpion &src);

	// Destructor
	virtual	~RadScorpion();

	// Assignation operator overload
	RadScorpion &	operator=(const RadScorpion &rhs);
};


#endif //RADSCORPION_HPP

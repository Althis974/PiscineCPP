/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Peon.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 10:24:52 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 10:24:52 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

# include "Victim.hpp"
# include <iostream>
# include <string>

class Peon : public Victim
{

public:

	// Constructors
	Peon();
	Peon(const std::string &name);

	// Copy constructor
	Peon(const Peon &src);

	// Destructor
	virtual ~Peon();

	// Assignation operator overload
	Peon &				operator=(const Peon &rhs);

	// Suffer a fantastic spell
	void				getPolymorphed() const;
};


#endif //PEON_HPP

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Soldier.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 11:45:19 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 11:45:19 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SOLDIER_HPP
#define SOLDIER_HPP

# include "Victim.hpp"

class Soldier : public Victim
{

public:

	// Constructors
	Soldier();

	Soldier(const std::string &name);

	// Copy constructor
	Soldier(const Soldier &src);

	// Destructor
	virtual ~Soldier();

	// Assignation operator overload
	Soldier &			operator= (const Soldier &rhs);

	// Suffer a fantastic spell
	void				getPolymorphed() const;
};


#endif //SOLDIER_HPP

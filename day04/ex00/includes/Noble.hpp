/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Noble.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 11:58:14 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 11:58:14 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef NOBLE_HPP
#define NOBLE_HPP

# include "Victim.hpp"

class Noble : public Victim
{

public:

	// Constructors
	Noble();

	Noble(const std::string &name);

	// Copy constructor
	Noble(const Noble &src);

	// Destructor
	virtual ~Noble();

	// Assignation operator overload
	Noble &			operator= (const Noble &rhs);

	// Suffer a fantastic spell
	void				getPolymorphed() const;
};


#endif //NOBLE_HPP

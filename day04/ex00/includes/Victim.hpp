/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Victim.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 10:24:39 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 10:24:39 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

# include <string>
# include <iostream>

class Victim
{

public:

	// Constructors
	Victim();

	Victim(const std::string &name);

	// Copy constructor
	Victim(const Victim &src);

	// Destructor
	virtual ~Victim();

	// Assignation operator overload
	Victim &		operator= (const Victim &rhs);

	// Getter
	std::string		getName() const;

	// Setter
	void			setName(const std::string& name);

	// Suffer a fantastic spell
	virtual void	getPolymorphed() const;

protected:

	std::string		_name;
};

// Insertion operator overload

std::ostream &		operator<< (std::ostream &out, const Victim &rhs);


#endif //VICTIM_HPP

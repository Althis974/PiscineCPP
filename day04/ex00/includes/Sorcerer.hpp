/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Sorcerer.hpp                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/12 10:24:27 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/12 10:24:27 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{

public:

	// Constructors
	Sorcerer();
	Sorcerer(const std::string &name, const std::string &title);

	// Copy constructor
	Sorcerer(const Sorcerer &src);

	// Destructor
	~Sorcerer();

	// Assignation operator overload
	Sorcerer &		operator=(const Sorcerer &rhs);

	// Getters
	std::string		getName() const;
	std::string		getTitle() const;

	// Setters
	void			setName(const std::string &name);
	void			setTitle(const std::string &title);

	// Polymorph spell
	void			polymorph(const Victim &victim) const;

private:

	std::string		_name;
	std::string		_title;
};

// Insertion operator overload

std::ostream &		operator<<(std::ostream &out, const Sorcerer &rhs);


#endif //SORCERER_HPP

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   CentralBureaucracy.hpp                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/18 16:58:32 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/18 16:58:32 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CENTRALBUREAUCRACY_HPP
#define CENTRALBUREAUCRACY_HPP

# include "Bureaucrat.hpp"
# include "OfficeBlock.hpp"

class CentralBureaucracy
{

public:

	// Constructor
	CentralBureaucracy();

	// Copy constructor
	CentralBureaucracy(const CentralBureaucracy &src);

	// Destructor
	~CentralBureaucracy();

	// Assignation operator overload
	CentralBureaucracy &	operator=(const CentralBureaucracy &rhs);

	// Feed office blocks
	void					feed(Bureaucrat *bureaucrat);

	// Queue targets
	void					queueUp(const std::string &target);

	// Make all these sla.. employees work
	void					doBureaucracy();

private:

	int 					_officeIndex;
	OfficeBlock				_blocks[20];
	std::string				_queue[42];
};


#endif //CENTRALBUREAUCRACY_HPP

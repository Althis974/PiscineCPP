/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Solver.hpp                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/22 14:08:47 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/22 14:08:47 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef SOLVER_HPP
#define SOLVER_HPP

#include <iostream>
#include <stack>
#include <vector>

class Token;

class Solver
{
	
public:
	// Constructors
	Solver();

	// Copy constructor
	Solver(const Solver &src);

	// Destructor
	~Solver();

	// Assignation operator overload
	Solver &		operator=(const Solver &rhs);

	// Solve expression
	static void		solve(std::vector<Token> vector);
};


#endif //SOLVER_HPP

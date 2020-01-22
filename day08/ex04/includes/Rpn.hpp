/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Rpn.hpp                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 16:28:47 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 16:28:47 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include "Token.hpp"
#include <stack>
#include <iostream>
#include <vector>

class Token;

class Rpn
{

public:
	// Constructors
	Rpn();

	// Copy constructor
	Rpn(const Rpn &src);

	// Destructor
	~Rpn();

	// Assignation operator overload
	Rpn &			operator=(const Rpn &rhs);

	// postfixize tokens
	static std::vector<Token>	postfixize(std::vector<Token> tokens);
	static void					loadStack(const Token &token);

private:

	static std::vector<Token>	_vector;
	static std::stack<Token>	_stack;
};


#endif //RPN_HPP

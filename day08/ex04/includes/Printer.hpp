/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Printer.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 15:54:47 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 15:54:47 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PRINTER_HPP
#define PRINTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <stack>

class Token;

class Printer
{

public:

	// Constructors
	Printer();

	// Copy constructor
	Printer(const Printer &src);

	// Destructor
	~Printer();

	// Assignation operator overload
	Printer &		operator=(const Printer &rhs);

	// Explicit
	static void		printToken(std::vector<Token> vector);
	static void		printPostfix(std::vector<Token> vector);
	static void		printStack(std::stack<Token> stack);
	static void		printSteps(Token &token, const std::stack<Token> &stack);

};


#endif //PRINTER_HPP

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Token.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 15:17:40 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 15:17:40 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef TOKEN_HPP
#define TOKEN_HPP

#include <string>
#include <sstream>
#include <iostream>
#include <vector>

class				Token
{

public:

	enum			Type
	{
		NONE,
		NUM,
		OP,
		PAR_OPEN,
		PAR_CLOSE
	};

	// Constructors
	Token();

	Token(int n);

	Token(char c);

	// Copy constructor
	Token(const Token &src);

	// Destructor
	~Token();

	// Assignation operator overload
	Token &						operator=(const Token &rhs);

	// Getters
	int							getValue() const;
	Type						getType() const;

	// Tokenize expression
	static std::vector<Token>	tokenize(const std::string &expr);

	// Convert token to string
	std::string					toString() const;

private:

	Type						_type;
	int							_value;
};

// Insertion operator overload
std::ostream &					operator<<(std::ostream &out, const Token &rhs);


#endif //TOKEN_HPP

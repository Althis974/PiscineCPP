/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Token.cpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 15:17:36 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 15:17:36 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/Token.hpp"
#include "../includes/Printer.hpp"

// Constructors

Token::Token() : _type(NONE), _value(0)
{

}

Token::Token(int n) : _type(NUM), _value(n)
{

}

Token::Token(char c) : _value(c)
{
	switch (c)
	{
		case '+':
		case '-':
		case '/':
		case '*':
			this->_type = OP;
			break;

		case '(':
			this->_type = PAR_OPEN;
			break;

		case ')':
			this->_type = PAR_CLOSE;
			break;

		default:
			throw std::runtime_error("Invalid token");
	}
}

// Copy constructor

Token::Token(const Token &src) : _type(src._type), _value(src._value)
{

}

// Destructor

Token::~Token()
{

}

// Assignation operator overload

Token &				Token::operator=(const Token &rhs)
{
	this->_type = rhs._type;
	this->_value = rhs._value;

	return (*this);
}

// Getters

int					Token::getValue() const
{
	return (this->_value);
}

Token::Type			Token::getType() const
{
	return (this->_type);
}

// Tokenize

std::vector<Token> 	Token::tokenize(const std::string &expr)
{
	std::stringstream stringStream(expr);
	std::vector<Token> vector;
	Token token;
	char c;

	while (stringStream >> c)
	{
		if (isdigit(c))
		{
			int a;

			stringStream.unget();

			stringStream >> a;

			token = Token(a);

			vector.push_back(token);

			continue;
		}

		token = Token(c);

		vector.push_back(Token(c));
	}

	Printer::printToken(vector);

	return (vector);
}

// Convert token to string

std::string			Token::toString() const
{
	std::stringstream stringStream;

	switch (this->_type)
	{

		case NUM:
			stringStream << "Num(" << this->_value << ")";
			break;

		case OP:
			stringStream << "Op(" << static_cast<char>(this->_value) << ")";
			break;

		case PAR_OPEN:
			stringStream << "ParOpen";
			break;

		case PAR_CLOSE:
			stringStream << "ParClose";
			break;

		default:
			stringStream << "None";
			break;
	}

	return (stringStream.str());
}

// Insertion operator overload

std::ostream &		operator<<(std::ostream &out, const Token &rhs)
{
	out << rhs.toString();

	return (out);
}
/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Container.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/09 11:00:24 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/09 11:00:24 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CONTAINER_HPP
#define CONTAINER_HPP

#include <iostream>

class Container
{

public:

	// Constructor
	Container();

	// Copy constructor
	Container(const Container &src);

	// Destructor
	~Container();

	// Assignation operator overload
	Container &			operator=(const Container &rhs);

	// Getter
	char *				getCell();

	// > : increment the data pointer (to point to the next cell to the right)
	void				moveRight();

	// < : decrement the data pointer (to point to the next cell to the left)
	void				moveLeft();

	// + : increment (increase by one) the byte at the data pointer
	void				increment();

	// - : decrement (decrease by one) the byte at the data pointer
	void				decrement();

	// . : output the byte at the data pointer
	void				write();

	// , : accept one byte of input, storing its value in the byte
	// at the data pointer
	void				read();

private:

	static const int	_size;
	char *				_memory;
	int					_position;
};


#endif //CONTAINER_HPP

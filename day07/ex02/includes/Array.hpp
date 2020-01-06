/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Array.hpp                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/06 00:31:42 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/06 00:31:42 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class				Array
{

public:

	// Constructors
	Array<T>() : _array(nullptr), _size(0)
	{

	}

	Array<T>(unsigned int n) : _size(n)
	{
		this->_array = new T*[n];

		for (unsigned int i = 0; i < this->_size; ++i)
			this->_array[i] = new T();
	}

	// Copy constructor
	Array<T>(const Array<T> &src) : _size(src._size)
	{
		this->_array = new T*[this->_size];

		for (unsigned int i = 0; i < this->_size; ++i)
		{
			this->_array[i] = new T();
			*this->_array[i] = *src._array[i];
		}
	}

	// Destructor
	~Array<T>()
	{
		for (unsigned int i = 0; i < this->_size; ++i)
			delete this->_array[i];

		delete [] this->_array;
	}

	// Assignation operator overload
	Array<T> &		operator=(const Array<T> &rhs)
	{
		this->_size = rhs.size();

		T *a = new T*[this->_size];

		for (int i = 0; i < this->_size; ++i)
			a[i] = new T(rhs[i]);

		return (*this);
	}

	// Subscription operator overload
	T &				operator[](unsigned int i)
	{
		if (i >= this->_size)
			throw std::exception();

		return (*this->_array[i]);
	}

	// Getter
	unsigned int	size()	const
	{
		return (this->_size);
	}

private:

	T **			_array;
	unsigned int	_size;
};


#endif //ARRAY_HPP

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/20 14:06:58 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/20 14:06:58 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <iomanip>

const int		WIDTH = 11;

class Base
{

public:

	// Destructor
	virtual ~Base();
};

class A : public Base
{

};

class B : public Base
{

};

class C : public Base
{

};

// Destructor

Base::~Base()
{

}

// Generate random instance

Base *			generate()
{
	int random = std::rand() % 3;

	if (random == 0)
		return new A();
	else if (random == 1)
		return new B();
	else return new C();
}

// Display according to real type

void			identify_from_pointer(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "A";
	else if (dynamic_cast<B *>(p))
		std::cout << "B";
	else if (dynamic_cast<C *>(p))
		std::cout << "C";
}

// Display according to real type

void			identify_from_reference(Base &p)
{
	try
	{
		Base a = dynamic_cast<A &>(p);
		std::cout << "A";
	}
	catch(std::bad_cast e)
	{

	}

	try
	{
		Base b = dynamic_cast<B &>(p);
		std::cout << "B";
	}
	catch(std::bad_cast e)
	{

	}

	try
	{
		Base c = dynamic_cast<C &>(p);
		std::cout << "C";
	}
	catch(std::bad_cast e)
	{

	}
}

int				main()
{
	std::srand(time(nullptr));

	for (int i = 0; i < 10; ++i)
	{
		std::cout << "\n----- ONE-MORE-TIME -----\n\n";

		Base *ptr = generate();

		identify_from_pointer(ptr);
		std::cout << std::setw(WIDTH) << "|" << std::setw(WIDTH + 2);
		identify_from_reference(*ptr);
		std::cout << std::endl;

		delete ptr;
	}
}
/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Pony.hpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/29 15:07:29 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/11/29 15:07:29 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <string>
#include <iostream>

class Pony
{

public:

	// Constructor
	Pony(const std::string &name);

	//Destructor
    ~Pony();

    // Setters
    void       		setAge(const std::string &age);
    void       		setColor(const std::string &color);

    // Getters
    std::string		getName() const;
    std::string		getAge() const;
    std::string		getColor() const;

private:

    std::string		_name;
    std::string		_age;
    std::string		_color;
};

#endif //PONY_HPP

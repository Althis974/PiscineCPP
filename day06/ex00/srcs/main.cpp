/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/19 14:40:38 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/19 14:40:38 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <cfloat>
#include <cmath>

// Convert entry to char

void	convertToChar(double d)
{
	std::cout << "char: ";

	if (std::isnan(d))
		std::cout << "impossible" << std::endl;
	else if (d > 126 || d < 32)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << static_cast<char>(d) << std::endl;
}

// Convert entry to int

void	convertToInt(double d)
{
	std::cout << "int: ";

	if (d > INT_MAX || d < INT_MIN || std::isnan(d))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(d) << std::endl;
}

// Convert entry to float

void	convertToFloat(double d)
{
	std::cout << "float: ";

	if (!(isinf(d) || isnan(d)) && (d < FLT_MIN || d > FLT_MAX))
		std::cout << "impossible" << std::endl;
	else if (floor(d) == d)
		std::cout << std::fixed << std::setprecision(1)
				  << static_cast<float>(d) << "f" << std::endl;
	else
		std::cout << d << "f" << std::endl;
}

// Convert entry to double

void	convertToDouble(double d)
{
	std::cout << "double: ";

	if (!(isinf(d) || isnan(d)) && (d < DBL_MIN || d > DBL_MAX))
		std::cout << "impossible" << std::endl;
	else if (floor(d) == d)
		std::cout << std::fixed << std::setprecision(1) << d << std::endl;
	else
		std::cout << d << std::endl;
}

// Check entry

void	check(const std::string &str)
{
	double d;

	try
	{
		d = std::stod(str);
	}
	catch (std::exception &e)
	{
		d = str[0];
	}

	convertToChar(d);
	convertToInt(d);
	convertToFloat(d);
	convertToDouble(d);
}

int		main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << ("usage: ./convert [char | int | float | double ]")
				  << std::endl;
		return (1);
	}

	check(av[1]);

	return (0);
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   env.hpp                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: rlossy <rlossy@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/18 12:07:23 by rlossy       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/18 12:07:23 by rlossy      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef ENV_HPP
#define ENV_HPP

#include <string>
#include <iostream>
#include <ncurses.h>
#include "keycode.hpp"


typedef struct				s_pos
{
	int 					x;
	int 					y;
}							t_pos;

#endif //ENV_HPP

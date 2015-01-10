/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hades <hades@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:31:36 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 17:29:39 by hades            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include "../headers/DebugEntity.class.hpp"
#include "../headers/EnnemyShip.class.hpp"
#include "../headers/PlayerShip.class.hpp"
#include "../headers/Projectile.class.hpp"

class test {
public:
	test( int i, int j);
std::string	display( void );

	int x;
	int y;
};

test::test(int i, int j) : x(i), y(j) {
}

std::string		test::display( void ) {
	return ">";
}

int		main(void)
{
	int x, y;
	int c;
	initscr();
	// nodelay(stdscr, true); 			
	keypad(stdscr, true);
	noecho();		
 	curs_set(0);				
 	// start_color();
 	// init_pair(1, COLOR_RED, COLOR_BLUE);
	// wbkgd(stdscr,COLOR_PAIR(1));
	getmaxyx(stdscr, x, y);
	x = x;
	y = y;

	test		o(0, 0);
	std::string name = o.display();

	while ( (c = getch()) != 27 )
	{
		addstr((const char*)name);
		getch();
	}

    endwin();

	return 0;
}
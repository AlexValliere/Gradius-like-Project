/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hades <hades@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:31:36 by alex              #+#    #+#             */
/*   Updated: 2015/01/10 17:43:24 by hades            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include "../headers/DebugEntity.class.hpp"
#include "../headers/EnnemyShip.class.hpp"
#include "../headers/PlayerShip.class.hpp"
#include "../headers/Projectile.class.hpp"

int		main(void)
{
	int x, y;
	int c;
	initscr();
	// nodelay(stdscr, true); 			
	keypad(stdscr, true);
	noecho();		
 	curs_set(0);				
 	start_color();
 	init_pair(1, COLOR_RED, COLOR_BLUE);
	wbkgd(stdscr,COLOR_PAIR(1));
	getmaxyx(stdscr, x, y);

	printw("press a key (esc to exit)");
	while ( (c = getch()) != 27 )
	{
		move(x/2, y/2);
		printw(" code key : %d, key is %c", c, c);
		move(0,0);
		printw("press a key (esc to exit)");
		refresh();
		getch();
	}

    endwin();

	return 0;
}
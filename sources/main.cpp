/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 13:31:36 by alex              #+#    #+#             */
/*   Updated: 2015/01/11 16:58:02 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include "../headers/DebugEntity.class.hpp"
#include "../headers/EnnemyShip.class.hpp"
#include "../headers/Map.class.hpp"
#include "../headers/PlayerShip.class.hpp"
#include "../headers/Projectile.class.hpp"

int		main(void)
{
	// DebugEntity::setDebug(true);
	int			input = 0;
	int			x, y;
	Map			map;
	PlayerShip	player(map, 2, 11);

	initscr();
	// nodelay(stdscr, true); 			
	keypad(stdscr, true);
	noecho();		
 	curs_set(0);				
 	// start_color();
 	// init_pair(1, COLOR_RED, COLOR_BLUE);
	// wbkgd(stdscr,COLOR_PAIR(1));
	getmaxyx(stdscr, y, x);

	map.drawMap();

	move(y - 1, x - 25);
	printw("press a key (esc to exit)");

	move(0, 0);
	printw("Sreen's dimension: %dx%d", x, y);

	while ((input = getch()) != 27)
	{
		player.actionShip(map, input);
		clear();

		player.moveProjectiles(map);

		map.drawMap();

		mvprintw(y - 2, 1, "Map: ship player pos %dx/%dy", map.getPlayerPosX(), map.getPlayerPosY());

		mvprintw(y - 1, 1, "Ship player pos %dx/%dy", player.getX(), player.getY());

		mvprintw(y / 2, x / 2, " code key : %d, key is %c", input, input);
		mvprintw(y - 1, x - 25, "press a key (esc to exit)");
		refresh();
	}

    endwin();

	return 0;
}
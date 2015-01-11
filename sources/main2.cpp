/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 14:06:58 by hades             #+#    #+#             */
/*   Updated: 2015/01/11 19:26:09 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "../headers/DebugEntity.class.hpp"
#include "../headers/EnnemyShip.class.hpp"
#include "../headers/Map.class.hpp"
#include "../headers/PlayerShip.class.hpp"
#include "../headers/Projectile.class.hpp"

int		main(void)
{
	srand(time(0));
	int			input = 0;

	int			ennemyornot = 6;
	int			index_ennemy = 0;
	int			index = 1000;
	EnnemyShip	tab[1000];

	int			x, y;
	Map			map;
	PlayerShip	player(2, 11);

	map.setContentType(player.getY(), player.getX(), player.getType());

	initscr();
	keypad(stdscr, true);
	noecho();
	nodelay(stdscr, true);		
 	curs_set(0);				
 	start_color();
 	init_pair(1, COLOR_BLACK, COLOR_WHITE);
	wbkgd(stdscr,COLOR_PAIR(1));
	getmaxyx(stdscr, y, x);

	map.drawMap();

	move(y - 1, x - 25);
	printw("press a key (esc to exit)");
	move(0, 0);
	printw("Sreen's dimension: %dx%d", x, y);

	while ((input = getch()) != 27)
	{
		clear();
		player.actionShip(map, input);
		while ( index >= 0) {
			if ( tab[1000].getActive() ) {
    			clear();
    			mvprintw(12, 40, "YOU WIN !");
    			sleep(3);
    			endwin();
    			return (0);
			}
			if (tab[index].getActive()) {
				tab[index].moveShip(map, input);
			}
			index--;
		}
		index = 1000;
		if ( ennemyornot == 0 ) {
			if (index_ennemy < 1000) {
				tab[index_ennemy].setActive(true);
				index_ennemy++;
			}
			ennemyornot = 6;
		}
		ennemyornot--;

		map.drawMap();
		refresh();
		usleep(50000);
	}

    endwin();

	return 0;
}


		// mvprintw(y - 2, 1, "Map: ship player pos %dx/%dy", map.getPlayerPosX(), map.getPlayerPosY());
		// mvprintw(y - 1, 1, "Ship player pos %dx/%dy", player.getX(), player.getY());
		// mvprintw(y / 2, x / 2, " code key : %d, key is %c", c, c);
		// mvprintw(y - 1, x - 25, "press a key (esc to exit)");
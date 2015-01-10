#include "Test.class.hpp"
#include <ncurses.h>
#include <unistd.h>
#include <iostream>

int		main( void )
{
 	initscr();					// start curses mode ;
 	noecho();
	keypad(stdscr, true);		// set the keyboard as standard one so special touch are usable
 	curs_set(0);				// hide cursor
 	int c;
 	int x, y;
 	getmaxyx(stdscr, x, y);

 	Test				a(x/2, 0);
	
	a.display();

 	while ( (c=getch()) != 27 ) {
		if (c == 259) {
			if (a.x < 24) {
				mvdelch(a.x, a.y);
				a.x -= 1;
 				a.display();
			}
			else {
				mvprintw(1, 50, "too much");
			}
		}
		if (c == 258) {
			if ( a.x > 1 ) {
				mvdelch(a.x, a.y);
				a.x += 1;
 				a.display();
			}
			else {
				mvprintw(1, 50, "not enough");				
			}
		}
 	}

	endwin();
	return (0);
}
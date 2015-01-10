#include <ncurses.h>
#include <unistd.h>
#include <iostream>

// int 		main( void ) {

// 	initscr();					// start curses mode ;
// 	printw("Hello World !");
// 	refresh();					// print it on the real screen
// 	getch();					// wait for use input
// 	endwin();					// end curses mode

// 	return (0);
// }

// int 		main( void ) {

// 	initscr();					// start curses mode ;
// 	move(5, 6);					// move the cursor to X, Y move(0,0) is the top of the terminal
// 	printw("Hello World !");
// 	refresh();					// print it on the real screen
// 	getch();					// wait for use input
// 	endwin();					// end curses mode

// 	return (0);
// }

// int		main( void )
// {
//  	initscr();					// start curses mode ;
// 	noecho();					// hide the input;
// 	raw();						// pass directly the input to the programme without buffering

// 	int c;						// will be use to get the keycode of the input with the function getch();
// 	printw("press a key : ( esc to exit )");
// 	refresh();
// 	while ( (c = getch()) != 27 ) {  // keykode 27 is escap input
// 		move(1, 0);
// 		printw("keycode %d, input : %c", c, c);
// 		move(0, 0);
// 		printw("press a key : ( esc to exit )");
// 		refresh();
// 	}
// 	getch();
// 	endwin();
// 	return (0);
// }

// int		main( void )
// {
//  	initscr();					// start curses mode ;

// 	int x, y;						// will be use to get the max x and max y of the screen with getmaxyx();
// 	getmaxyx(stdscr, x, y);			// set x and y with the value of the max size of the screen stdscr means actual screen
// 	move(x/2, y/2);
// 	attron(A_BOLD);					// set the char as BOLD many flags are available
// 	addch('a');						// addch is printw for char
// 	attroff(A_BOLD);				// unset the display modification
// 	addch('a');
// 	refresh();
// 	getch();
// 	endwin();
// 	return (0);
// }

// int		main( void )
// {
//  	initscr();					// start curses mode ;
// 	keypad(stdscr, true);		// set the keyboard as standard one so special touch are usable
//  	curs_set(0);				// hide cursor
//  	start_color();				// enable de set color on the term
//  	init_pair(1, COLOR_RED, COLOR_BLUE); // set a pair (foreground, backgroud color) and call it as the "1" pair


// 	attron(COLOR_PAIR(1));					// set the pair available
// 	addch('a');						// addch is printw for char
// 	attroff(COLOR_PAIR(1));				// unset the display modification
// 	refresh();
// 	nodelay(stdscr, true); 			// means that the programe will not wait the input for the getch() function
// 	getch();
// 	usleep(1000000);
// 	endwin();
// 	return (0);
// }
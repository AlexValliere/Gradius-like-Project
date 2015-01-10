#include <ncurses.h>
#include "Test.class.hpp"

Test::Test( int i, int j) : x(i), y(j) {
}

Test::~Test( void ) {	
}

Test::Test(void) : x(0), y(0) {
}

void		Test::display() {
	move(this->x, this->y);
	printw(">");
	refresh();
}
#ifndef TEST_CLASS_HPP
#define TEST_CLASS_HPP

#include <ncurses.h>


class Test
{
public:
	Test(int i, int j);
	Test( void );
	~Test( void );
	
int		x;
int		y;	
void	display( void );
};

#endif
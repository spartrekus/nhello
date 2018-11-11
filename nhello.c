
#include <ncurses.h>

int main()
{	
        int ch ; int gameover = 0;
	initscr();			/* Start curses mode 		  */
        while( gameover == 0 )
        {
           erase();
	   mvprintw( 2, 2 , "Hello World !!!");	/* Print Hello World		  */
	   refresh();			/* Print it on to the real screen */
	   ch = getch();			/* Wait for user input */
           if( ch == 'q' ) gameover =1;
        }
	endwin();			/* End curses mode		  */

	return 0;
}

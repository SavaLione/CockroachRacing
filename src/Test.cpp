#include <curses.h>			/* ncurses.h includes stdio.h */
#include <string.h>

int some() {
	char mesg[] = "Enter a string: "; /* message to be appeared on the screen */
	char str[80];
	int row, col;
	initscr();
	getmaxyx(stdscr, row, col); /* get the number of rows and columns */
	mvprintw(row / 2, (col - strlen(mesg)) / 2, "%s", mesg);
	getstr(str);
	mvprintw(LINES - 2, 0, "You Entered: %s", str);
	getch();
	endwin();

	return 0;
}


#include <iostream>
#include <conio.h>
#include <curses.h>

#include "CockroachRacing.h"

using namespace std;

void v_print_footer();
void v_logo();
void v_startgame();
void v_crew();

const int POINT = 4, BUFF = 6;
const char items[POINT][BUFF] = {
    "Play",
    "Help",
    "Crew",
    "Exit"
};

void point1() {
	clear();
	v_startgame();
}

void point3() {
	clear();
	v_crew();
}

void v_menu_main() {
	initscr();
	//char menu[POINT * BUFF];
	string menu = "";
	int choice = 0, row = 0, col = 0;
	getmaxyx(stdscr, row, col);
	bool fl = true, key = false;
	curs_set(0);
	keypad(stdscr, true);
	start_color();
	init_pair(1, COLOR_BLACK, COLOR_WHITE);
	while (fl) {
		menu = "";
		clear();
		attron(COLOR_PAIR(1));
		mvwprintw(stdscr, 0, 0, cockroachracing::buglogoup.c_str());
		attroff(COLOR_PAIR(1));
		mvwprintw(stdscr, 3, 0, cockroachracing::logonew1.c_str());
		mvwprintw(stdscr, 4, 0, cockroachracing::logonew2.c_str());
		mvwprintw(stdscr, 5, 0, cockroachracing::logonew3.c_str());
		mvwprintw(stdscr, 6, 0, cockroachracing::logonew4.c_str());
		mvwprintw(stdscr, 7, 0, cockroachracing::logonew5.c_str());
		mvwprintw(stdscr, 8, 0, cockroachracing::logonew6.c_str());
		mvwprintw(stdscr, 9, 0, cockroachracing::logonew7.c_str());
		mvwprintw(stdscr, 10, 0, cockroachracing::logonew8.c_str());
		attron(COLOR_PAIR(1));
		mvwprintw(stdscr, row - 2, 0, cockroachracing::buglogodown.c_str());
		attroff(COLOR_PAIR(1));
		key = false;
		for (int i = 0; i < POINT; i++) {
			if (i == choice)
				menu += "                 >";
			else
				menu += "                  ";
			menu += items[i];
		}
		//printw(menu.c_str());
		attron(COLOR_PAIR(1));
		mvwprintw(stdscr, row/2, 0, menu.c_str());
		attroff(COLOR_PAIR(1));
		switch (getch()) {
		case KEY_UP:
			choice--;
			break;
		case KEY_DOWN:
			choice++;
			break;
		case KEY_LEFT:
			choice--;
			break;
		case KEY_RIGHT:
			choice++;
			break;
		default:
			key = true;
			break;
		}

		if (key) {
			switch (choice) {
			case 0:
				v_startgame();
				break;
			case 1:
				clear();
				mvwprintw(stdscr, 0, 0, cockroachracing::buglogoup.c_str());
				mvwprintw(stdscr, row/2, 0, cockroachracing::menuhelp.c_str());
				mvwprintw(stdscr, row - 2, 0, cockroachracing::buglogodown.c_str());
				getch();
				break;
			case 2:
				clear();
				addstr(cockroachracing::darlakon.c_str());
				addch('\n');
				addstr(cockroachracing::savalione.c_str());
				addch('\n');
				addstr(cockroachracing::bandit.c_str());
				addch('\n');
				addstr(cockroachracing::lama.c_str());
				getch();
				break;
			case 3:
				fl = false;
				break;
			}
		}

		if (choice >= POINT)
			choice = 0;
		if (choice < 0)
			choice = POINT - 1;
	}
}

inline void v_print_footer() {
	cout << cockroachracing::buglogodown;
}

inline void v_logo() {
	cout << cockroachracing::buglogo;
}

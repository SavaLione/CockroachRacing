#include <iostream>
#include <conio.h>
#include <curses.h>
#include <string.h>

#include "CockroachRacing.h"

using namespace std;

string border();

const int POINT = 2, BUFF = 9;
const char items[POINT][BUFF] = {
    "New Game",
    "Back"
};

char name[128];
unsigned int score = 0;


void game() {
	initscr();
	string menu = "";
	int choice = 0, bugs = 0, row = 0, col = 0;
	getmaxyx(stdscr, row, col);
	bool fl = true, key = false, newgame = false;
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
				newgame = true;
				fl = false;
				break;
			case 1:
				fl = false;
				break;
			}
		}

		if (choice >= POINT)
			choice = 0;
		if (choice < 0)
			choice = POINT - 1;
	}

	if (newgame) {
		clear();
		attron(COLOR_PAIR(1));
		mvwprintw(stdscr, 0, 0, border().c_str());
		mvwprintw(stdscr, row - 1, 0, border().c_str());
		attroff(COLOR_PAIR(1));
		char namestr[] = "Enter you name: ";
		mvprintw(row / 2, (col - strlen(namestr)) / 2, "%s", namestr);
		getstr(name);

		mvwprintw(stdscr, row - 1, 0, "Player:%s ", name);
		curs_set(0);

		refresh();
	}

}

void newgame() {

}

string border() {
	string ret = "";
	int row = 0, col = 0;
	getmaxyx(stdscr, row, col);
	for (int i = 0; i < col; i++)
		ret += " ";
	return ret;
}
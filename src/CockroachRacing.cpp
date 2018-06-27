#include <iostream>

#include "Menu.h"

int test();
int test1();

int main() {
	std::vector<std::string> items;
	std::vector<int> functions;

	//functions[0] = test();
	//std::cout << (void*)test() << std::endl;

	items.insert(items.end(), "test0");
	items.insert(items.end(), "test1");
	items.insert(items.end(), "test1");
	items.insert(items.end(), "test1");
	items.insert(items.end(), "test1");
	items.insert(items.end(), "test1");

	Menu menu(items);
	//menu.getTest();
	std::cout << menu.getMenu() << std::endl;


	return 0;
}

int test() {
	std::cout << "test" << std::endl;
	return 0;
}
int test1() {
	std::cout << "test1" << std::endl;
	return 0;
}

/*

#include <iostream>
#include <conio.h>
#include <curses.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>

#include "CockroachRacing.h"
#include "Game.h"

using namespace std;

string border();
void * bugs(void* thread_data);

const int POINTITEM = 4, BUFF = 6;
const char items[POINTITEM][BUFF] = { "Play", "Help", "Crew", "Exit" };

int main() {
	initscr();
	string menu = "";
	int choice = 0, row = 0, col = 0, logoborder = 0;
	getmaxyx(stdscr, row, col);
	logoborder = col / 6;
	bool fl = true, key = false;
	curs_set(0);
	keypad(stdscr, true);
	start_color();
	init_pair(1, COLOR_BLACK, COLOR_WHITE);
	pthread_t thread;
	void* thread_data = NULL;
	pthread_create(&thread, NULL, bugs, thread_data);

	while (fl) {
		menu = "";
		clear();
		attron(COLOR_PAIR(1));
		mvwprintw(stdscr, 0, 0, border().c_str());
		attroff(COLOR_PAIR(1));
		mvwprintw(stdscr, 3, logoborder, cockroachracing::logonew1.c_str());
		mvwprintw(stdscr, 4, logoborder, cockroachracing::logonew2.c_str());
		mvwprintw(stdscr, 5, logoborder, cockroachracing::logonew3.c_str());
		mvwprintw(stdscr, 6, logoborder, cockroachracing::logonew4.c_str());
		mvwprintw(stdscr, 7, logoborder, cockroachracing::logonew5.c_str());
		mvwprintw(stdscr, 8, logoborder, cockroachracing::logonew6.c_str());
		mvwprintw(stdscr, 9, logoborder, cockroachracing::logonew7.c_str());
		mvwprintw(stdscr, 10, logoborder, cockroachracing::logonew8.c_str());
		attron(COLOR_PAIR(1));
		mvwprintw(stdscr, row - 1, 0, border().c_str());
		attroff(COLOR_PAIR(1));
		key = false;
		for (int i = 0; i < POINTITEM; i++) {
			if (i == choice)
				menu += "                 >";
			else
				menu += "                  ";
			menu += items[i];
		}
		attron(COLOR_PAIR(1));
		mvwprintw(stdscr, row / 2, 0, menu.c_str());
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
				game();
				break;
			case 1:
				clear();
				attron(COLOR_PAIR(1));
				mvwprintw(stdscr, 0, 0, cockroachracing::buglogoup.c_str());
				attroff(COLOR_PAIR(1));
				mvwprintw(stdscr, row / 2, 0,
						cockroachracing::menuhelp.c_str());
				attron(COLOR_PAIR(1));
				mvwprintw(stdscr, row - 2, 0,
						cockroachracing::buglogodown.c_str());
				attroff(COLOR_PAIR(1));
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

		if (choice >= POINTITEM)
			choice = 0;
		if (choice < 0)
			choice = POINTITEM - 1;
	}
	return 0;
}

void * bugs(void* thread_data) {
	int row = 0, col = 0;
	getmaxyx(stdscr, row, col);
	init_pair(1, COLOR_BLACK, COLOR_WHITE);
	for (int i = 0; i < col; i++) {
		attron(COLOR_PAIR(1));
		mvwprintw(stdscr, 0, i, cockroachracing::bug.c_str());
		mvwprintw(stdscr, row - 1, i, cockroachracing::bug.c_str());
		attroff(COLOR_PAIR(1));
		refresh();
		usleep(300);
	}
}

*/

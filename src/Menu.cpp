#include <iostream>
////
#include <stdarg.h>
#include <functional>
#include <curses.h>

#include "Menu.h"

Menu::Menu(std::vector<std::string> & items) :
		items(items) {
	setWindowSize();
	setColor();
	setBorder();
	*fl = true;
	*key = false;
	*choice = 0;
	//*menu = "";
	curs_set(0);
	keypad(stdscr, true);
	start_color();
	init_pair(1, COLOR_BLACK, COLOR_WHITE);
}

Menu::~Menu() {
	delete choice;
	delete row;
	delete col;
	delete fl;
	delete key;
	delete[] color;
	delete border;
	delete[] menu;
}

void Menu::setWindowSize() {
	int *row = new int;
	int *col = new int;
	initscr();
	getmaxyx(stdscr, *row, *col);
	*this->row = *row;
	*this->col = *col;
	delete row;
	delete col;
}
void Menu::setColor() {
	color[0] = 0;
	color[1] = 7;
}
void Menu::setColor(int text, int background) {
	color[0] = text;
	color[1] = background;
}

int Menu::getMenu() {
	while(*fl) {
		clear();
		attron(COLOR_PAIR(1));
		mvwprintw(stdscr, 0, 0, (*border).c_str());
		mvwprintw(stdscr, *row - 1, 0, (*border).c_str());
		attroff(COLOR_PAIR(1));
		*key = false;
		for (int i = 0; i < (int)items.size(); i++) {
			menu[i] = "";
		}
		for (int i = 0; i < (int)items.size(); i++) {
			if (i == *choice) {
				menu[i] += '>';
				menu[i] += items[i];
				menu[i] += '\n';
			} else {
				menu[i] += ' ';
				menu[i] += items[i];
				menu[i] += '\n';
			}
		}
		attron(COLOR_PAIR(1));
		for (int i = 0; i < (int)items.size(); i++) {
			mvwprintw(stdscr, (*row / 2) + i, *col / 2, menu[i].c_str());
		}
		attroff(COLOR_PAIR(1));
		switch (getch()) {
		case KEY_UP:
			*choice = *choice - 1;
			break;
		case KEY_DOWN:
			*choice = *choice + 1;
			break;
		default:
			*key = true;
			break;
		}
		if (*key) {
			return *choice;
		}

		if (*choice >= (int)items.size())
			*choice = 0;
		if (*choice < 0)
			*choice = items.size() - 1;


		//refresh();
	}
	return -1;
}

void Menu::setBorder() {
	*border = "";
	for (int i = 0; i < *col; i++)
		*border += " ";
}

void Menu::getTest() {
	std::cout << *row << std::endl;
	std::cout << *col << std::endl;
	std::cout << color[0] << std::endl;
	std::cout << color[1] << std::endl;
	std::cout << std::endl;
	std::cout << items.size() << std::endl;
	std::cout << items[0] << std::endl;
	std::cout << items[1] << std::endl;
	std::cout << "|" << *border << "|" << std::endl;
	std::cout << std::endl;
}

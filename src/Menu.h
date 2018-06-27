/*
 * Menu.h
 *
 *  Created on: 27 θών. 2018 γ.
 *      Author: SavaLione
 */

#ifndef MENU_H_
#define MENU_H_

#include <string>
#include <vector>

class Menu {
private:
	std::vector<std::string> & items;
	int *choice = new int;
	int *row = new int;
	int *col = new int;
	int *color = new int[2];
	bool *fl = new bool;
	bool *key = new bool;
	std::string *border = new std::string;
	std::string *menu = new std::string[items.size()];
	void setWindowSize();
	void setColor();
	void setBorder();
public:
	Menu(std::vector<std::string> & items);
	~Menu();
	void setColor(int text, int background);
	int getMenu();
	void getTest();
};



#endif /* MENU_H_ */

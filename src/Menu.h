/*
 * Menu.h
 *
 *  Created on: 27 θών. 2018 γ.
 *      Author: SavaLione
 */

#ifndef MENU_H_
#define MENU_H_

class Menu {
private:
	std::vector<std::string> & items;
	int *choice = new int;
	int *row = new int;
	int *col = new int;
	int *color = new int[2];
	int *position = new int[2];
	bool *fl = new bool;
	bool *key = new bool;
	std::vector<std::string> description;
	std::string *border = new std::string;
	std::string *menu = new std::string[items.size()];
	void setWindowSize();
	void setColor();
	void setBorder();
	void setPosition();
	void setDescription();
public:
	Menu(std::vector<std::string> & items);
	~Menu();
	void setColor(int text, int background);
	void setDescription(std::vector<std::string> & description);
	void setPosition(int x, int y);
	int getMenu();
};



#endif /* MENU_H_ */

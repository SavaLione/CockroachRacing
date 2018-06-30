/**
	@file
	@brief
	@author
	@date 30 Jun 2018
*/
#include <vector>
#include <string>

#include <iostream>

#include "Menu.h"

using namespace std;

void newgame();

int main() {
	vector<string> vec;

	vec.push_back("New game");
	vec.push_back("Help");
	vec.push_back("About authors");
	vec.push_back("Exit");

	Menu *menu = new Menu(vec);

	switch(menu->getMenu()) {
	case 0:
		newgame();
		break;
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	default:
		break;
	}

	delete menu;

	return 0;
}

void newgame() {
	vector<string> vecmenu;
	vecmenu.push_back("Easy");
	vecmenu.push_back("Normal");
	vecmenu.push_back("Hard");

	vector<string> vecdescription;
	vecdescription.push_back("some");
	vecdescription.push_back("some1");
	vecdescription.push_back("some2");

	Menu *menu = new Menu(vecmenu);

	menu->setDescription(vecdescription);
	//menu->setPosition(1,1);

	menu->getMenu();

	delete menu;
}

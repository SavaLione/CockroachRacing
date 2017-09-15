#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
using namespace std;
void v_print();
void v_print_footer();
void v_logo();
void v_startgame();
int engine();
void v_win(int i_win);
void v_crew();

inline void print_menu(int choice) {
	system("cls");
	string point[5] = { "Play" , "Help", "Crew" , "Exit", " " };
	v_print();
	v_logo();
	for (int i = 1; i < 5; i++) {
		cout << endl;
	}
	for (int i = 1; i < 6; i++) {
		if (i == choice) {
			cout << "             <";
		} else if (i - 1 == choice) {
			cout << ">             ";
		} else {
			cout << "              ";
		}
		cout << point[i - 1];
	}
	for (int i = 0; i < 4; i++) {
		cout << endl;
	}
	v_print_footer();
}

void point1() {
	system("cls");
	v_startgame();
}

void point2() {
	system("cls");
	v_print();
	cout << "\tCockroach_Racing is a race-like game, where you place your bet on 1 of 6" << endl;
	cout << "\t cockroaches, and if you get it right - you'll earn 100 credits, if not " << endl;
	cout << "\t- lose 50 credits. When starting new game, you have 100 credits. GL HF." << endl;
	//THERE IS NO HOPE IN THIS HELL. NO HOPE AT ALL
	//SOOTHED. SEDATED
}

void point3() {
	system("cls");
	v_crew();
}

void v_menu_main() {
	int ch = 1;
	bool game = false;
	print_menu(ch);
	while (!game) {
		int x = _getch();
		switch (x) {
			case 13: {
			switch (ch) {
				case 1: {
				point1();
				break;
			}
				case 2: {
				point2();
				break;
			}
				case 3: {
				point3();
				break;
			}
				case 4: {
				game = true;
				break;
			}
				default: {
				break;
			}
			}
			break;
		}
			case 32: {
			switch (ch) {
				case 1: {
				point1();
				break;
			}
				case 2: {
				point2();
				break;
			}
				case 3: {
				point3();
				break;
			}
				case 4: {
				game = true;
				break;
			}
				default: {
				break;
			}
			}
			break;
		}
			case 224: {
			x = _getch();
			if (x == 77) {
				if (ch != 4) {
					ch++;
				} else {
					ch = 1;
				}
			}
			if (x == 75) {
				if (ch != 1) {
					ch--;
				} else {
					ch = 4;
				}
			}
			print_menu(ch);
			break;
		}
			default: {
			ch = 1; print_menu(ch);
			break;
		}
		}
	}
}

inline void v_print() {
	cout << "*******************************************************************************************" << endl;
	cout << "*************************************|Cockroach_Racing|************************************" << endl;
}

inline void v_print_footer() {
	cout << "********************|Use <- and -> for navigation and Enter to choose.|********************" << endl;
	cout << "*******************************************************************************************";
}

inline void v_logo() {
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "                                                `                                          " << endl;
	cout << "                                                `                                          " << endl;
	cout << "                                                 `       `                                 " << endl;
	cout << "                                                 `    ``                                   " << endl;
	cout << "                                              ` `.- ``                                     " << endl;
	cout << "                                             -+hh+s/                                       " << endl;
	cout << "                                         .:oyyosyyy:                                       " << endl;
	cout << "                                    ``.:oyyys++ss/` ``                                     " << endl;
	cout << "                                    .-/yhyssssss/                                          " << endl;
	cout << "                                  `:./hdhyysso-.-                                          " << endl;
	cout << "                                `.` .ydhyo/--/-`.                                          " << endl;
	cout << "                               `   `-/o:. .-.` .                                           " << endl;
	cout << "                                        `-.    `                                           " << endl;
	cout << "                                       .`                                                  " << endl;
	cout << "                                       `                                                   " << endl;
}

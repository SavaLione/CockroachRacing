#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <Windows.h>
#include <string>
#include <thread>
using namespace std;
void v_menu_main();
inline void v_engine_graphic(const int i_max1, const int i_max2, int i_m1, int i_m2, int(&i_m2_stroke)[6][101], int i_win, int i_win_stroke);
inline void print_select_cockroach(int choice, int money);
inline void v_win(int i_win);
void v_print();
void v_print_footer();
void v_logo();
void v_startgame();
int engine();
void v_win(int i_win);
void v_crew();
void v_small(int i_arg);
void v_static();
void v_thread(bool &b_fl);

int main() {
	SetConsoleTitle("Cockroach_Racing");
	system("cls");
	v_menu_main();
	return 0;
}

int engine() {
	const int i_max1 = 6, i_max2=101, i_m1 = (i_max1 - 1), i_m2 = (i_max2 - 1), i_fine = (i_m2 - 20);
	int i_win = -1, i_win_stroke = -1;
	bool b_fl = true, b_fl_fine = true, b_fl_win = true;
	int i_m2_stroke[i_max1][i_max2];
	srand(time(NULL));
	for (int i = 0; i <= i_m1; i++) {
		for (int z = 0; z <= i_m2; z++) {
			i_m2_stroke[i][z] = 0;
		}
	}
	for (int z = 0; z <= i_m2; z++) {
		for (int i = 0; i <= i_m1; i++) {
			if (z >= i_fine) {
				b_fl_fine = false;
			}
			if ((z != 0) && (i_m2_stroke[i][z - 1] == 86)) {
				b_fl = false;
				i_m2_stroke[i][z] = 0;
			}
			if (b_fl) {
				int i_chance = 0;
				if ((rand() % 10) < 3) {
					if ((rand() % 10) < 3) {
						if ((rand() % 2) == 1) {
							i_chance = 3;
						} else {
							i_chance = 0;
							//i_chance = -1;
						}
					} else {
						i_chance = 2;
					}
				} else {
					if (b_fl_fine) {
						if ((rand() % 4) <= 2) {
							i_chance = 1;
						} else {
							i_chance = -1;
						}
					} else {
						i_chance = 1;
					}
				}
				if ((i_chance == 0) && (z != 0)) {
					i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 0;
				} else if (i_chance == 0) {
					i_m2_stroke[i][z] = 0;
				}
				if (i_chance == 1) {
					if (z != 0) {
						if (i_m2_stroke[i][z - 1] < 73) {
							if (z == 0) {
								i_m2_stroke[i][z] = 13;
							} else {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 13;
							}
						} else {
							i_m2_stroke[i][z] = 86;
							b_fl = false;
						}
					} else {
						i_m2_stroke[i][z] = 13;
					}
				}
				if (i_chance == 2) {
					if (z != 0) {
						if (i_m2_stroke[i][z - 1] < 73) {
							if (z == 0) {
								i_m2_stroke[i][z] = 14;
							} else {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 14;
							}
						} else {
							i_m2_stroke[i][z] = 86;
							b_fl = false;
						}
					} else {
						i_m2_stroke[i][z] = 14;
					}
				}
				if (i_chance == 3) {
					if (z != 0) {
						if (i_m2_stroke[i][z - 1] < 72) {
							if (z == 0) {
								i_m2_stroke[i][z] = 15;
							} else {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 15;
							}
						} else {
							i_m2_stroke[i][z] = 86;
							b_fl = false;
						}
					} else {
						i_m2_stroke[i][z] = 15;
					}
				}
				if (i_chance == -1) {
						if (z == 0) {
							i_m2_stroke[i][z] = 0;
						} else {
							if (i_m2_stroke[i][z - 1] <= 6) {
								i_m2_stroke[i][z] = 0;
							} else {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] - 7;
							}
						}
					}
			} else {}
		}
	}
	for (int i = 0; (i <= i_m1) && (b_fl_win); i++) {
		for (int z = 0; (z <= i_m2) && (b_fl_win); z++) {
			switch (i_m2_stroke[i][z]) {
				case 0: {
				break;
			}
				case 86: {
				i_win = i;
				i_win_stroke = z;
				b_fl_win = false;
				break;
			}
				default: {
					break;
				}
			}
		}
	}
	v_engine_graphic(i_max1, i_max2, i_m1, i_m2, i_m2_stroke, i_win, i_win_stroke);
	return (i_win + 1);
}

void v_startgame() {
	int money = 100, choice = 1, i_win;
	bool b_fl = true, selected = false, b_fl_1 = true;
	while (b_fl) {
		if (money <= -100) {
			system("cls");
			v_win(10);
			b_fl = false;
			while (b_fl_1) {
				int x = _getch();
				switch (x) {
					case 32: {
						b_fl_1 = false;
						break;
					}
					case 13: {
						b_fl_1 = false;
						break;
					}
					default: {
						break;
					}
				}
			}
		}
		selected = false;
		while (!selected) {
			print_select_cockroach(choice, money);
			int x = _getch();
			switch (x) {
				case 72: {
				if (choice != 1) {
					choice--;
				} else {
					choice = 6;
				}
				break;
			}
				case 80: {
				if (choice != 6) {
					choice++;
				} else {
					choice = 1;
				}
				break;
			}
				case 32: {
				selected = true;
				i_win = engine();
				v_win(i_win);
				Sleep(750);
				if (i_win == choice) {
					v_win(12);
					money += 100;
					Sleep(750);
				} else {
					v_win(10);
					money -= 50;
					Sleep(750);
				}
				break;
			}
				case 13: {
				selected = true;
				i_win = engine();
				v_win(i_win);
				Sleep(750);
				if (i_win == choice) {
					v_win(12);
					Sleep(750);
					money += 100;
				} else {
					v_win(10);
					Sleep(750);
					money -= 50;
				}
				break;
			}
				case 27: {
					selected = true;
					b_fl = false;
					b_fl_1 = false;
					system("cls");
					v_win(11);
					break;
			}
			}
		}
	}
}

inline void print_select_cockroach(int choice, int money) {
	system("cls");
	cout << "Your money: " << money << endl;
	cout << "Choose the coackroach you think will win:" << endl;
	for (int i = 1; i < 7; i++) {
		if (i == choice) {
			cout << "[" << "  " << i << "  " << "]" << endl;
		} else {
			cout << "  " << "[" << i << "]" << endl;
		}
	}
}

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
				ch = 1;
				print_menu(ch);
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

void v_engine_graphic(const int i_max1, const int i_max2, int i_m1, int i_m2, int(&i_m2_stroke)[6][101], int i_win, int i_win_stroke) {
	string s_bug = "<@><";
	for (int i_stroke = -2; i_stroke <= i_win_stroke; i_stroke++) {
			bool b_fl = true;
			if (i_stroke == -1) {
				v_static();
			} else if (i_stroke < -2) {
				i_stroke = -1;
			} else if (i_stroke > i_win_stroke) {
				i_stroke = i_win_stroke;
			} else {
				system("cls");
				for (int i = 0; i <= i_m1; i++) {
						switch (i) {
							case 0: {
							v_small(10);
							cout << "[1]";
							if ((i_win == i) && (i_stroke == i_win_stroke)) {
								v_small(40);
							} else {
								for (int i_i = 0; i_i <= 81; i_i++) {
									if (i_m2_stroke[i][i_stroke] == i_i) {
										cout << s_bug;
									} else {
										cout << " ";
									}
								}
							}
							cout << "|#|" << endl;
							break;
						}
							case 1: {
							v_small(20);
							cout << "[2]";
							if ((i_win == i) && (i_stroke == i_win_stroke)) {
								v_small(40);
							} else {
								for (int i_i = 0; i_i <= 81; i_i++) {
									if (i_m2_stroke[i][i_stroke] == i_i) {
										cout << s_bug;
									} else {
										cout << " ";
									}
								}
							}
							cout << "|#|" << endl;
							break;
						}
							case 2: {
							v_small(20);
							cout << "[3]";
							if ((i_win == i) && (i_stroke == i_win_stroke)) {
								v_small(40);
							} else {
								for (int i_i = 0; i_i <= 81; i_i++) {
									if (i_m2_stroke[i][i_stroke] == i_i) {
										cout << s_bug;
									} else {
										cout << " ";
									}
								}
							}
							cout << "|#|" << endl;
							break;
						}
							case 3: {
							v_small(20);
							cout << "[4]";
							if ((i_win == i) && (i_stroke == i_win_stroke)) {
								v_small(40);
							} else {
								for (int i_i = 0; i_i <= 81; i_i++) {
									if (i_m2_stroke[i][i_stroke] == i_i) {
										cout << s_bug;
									} else {
										cout << " ";
									}
								}
							}
							cout << "|#|" << endl;
							break;
						}
							case 4: {
							v_small(20);
							cout << "[5]";
							if ((i_win == i) && (i_stroke == i_win_stroke)) {
								v_small(40);
							} else {
								for (int i_i = 0; i_i <= 81; i_i++) {
									if (i_m2_stroke[i][i_stroke] == i_i) {
										cout << s_bug;
									} else {
										cout << " ";
									}
								}
							}
							cout << "|#|" << endl;
							break;
						}
							case 5: {
							v_small(20);
							cout << "[6]";
							if ((i_win == i) && (i_stroke == i_win_stroke)) {
								v_small(40);
							} else {
								for (int i_i = 0; i_i <= 81; i_i++) {
									if (i_m2_stroke[i][i_stroke] == i_i) {
										cout << s_bug;
									} else {
										cout << " ";
									}
								}
							}
							cout << "|#|" << endl;
							v_small(10);
							break;
						}
							default: {
							break;
						}
						}
					}
				while (b_fl) {
					int x = _getch();
					switch (x) {
						case 32: {
						system("cls");
						i_stroke++;
						b_fl = false;
						break;
					}
						case 75: {
						system("cls");
						i_stroke -= 2;
						b_fl = false;
						break;
					}
						case 77: {
						system("cls");
						i_stroke++;
						b_fl = false;
						break;
					}
						case 13: {
						system("cls");
						i_stroke++;
						b_fl = false;
						break;
					}
						default: {
						break;
					}
					}
				}
			}
		}
}

void v_static() {
	v_small(10);
	v_small(30);
	v_small(20);
	v_small(31);
	v_small(20);
	v_small(32);
	v_small(20);
	v_small(33);
	v_small(20);
	v_small(34);
	v_small(20);
	v_small(35);
	v_small(10);
}

inline void v_small(int i_arg) {
	int i_type = (i_arg/10), i_num = (i_arg%10);
	switch (i_type) {
		case 1: {
		cout << "------------------------------------------------------------------------------------------|" << endl;
		break;
	}
		case 2: {
		cout << "----------------------------------------------------------------------------------------|#|" << endl;
		break;
	}
		case 3: {
		cout << "[" << i_num++ << "]" << "                                                                                     " << "|#|" << endl;
		break;
	}
		case 4: {
		cout << "                                                                                 <@><";
		break;
	}
		default: {
		break;
	}
	}
}

void v_win(int i_win) {
	bool b_fl = true;
	switch (i_win) {
		case 1: {
			cout << "  __  __          _______ _   _  _____ " << endl;
			cout << " /_ | \\ \\        / /_   _| \\ | |/ ____|" << endl;
			cout << "  | |  \\ \\  /\\  / /  | | |  \\| | (___  " << endl;
			cout << "  | |   \\ \\/  \\/ /   | | | . ` |\\___ \\ " << endl;
			cout << "  | |    \\  /\\  /   _| |_| |\\  |____) |" << endl;
			cout << "  |_|     \\/  \\/   |_____|_| \\_|_____/ " << endl;
		break;
	}
		case 2: {
			cout << "  ___   __          _______ _   _  _____ " << endl;
			cout << " |__ \\  \\ \\        / /_   _| \\ | |/ ____|" << endl;
			cout << "    ) |  \\ \\  /\\  / /  | | |  \\| | (___  " << endl;
			cout << "   / /    \\ \\/  \\/ /   | | | . ` |\\___ \\ " << endl;
			cout << "  / /_     \\  /\\  /   _| |_| |\\  |____) |" << endl;
			cout << " |____|     \\/  \\/   |_____|_| \\_|_____/ " << endl;
		break;
	}
		case 3: {
			cout << "  ____   __          _______ _   _  _____ " << endl;
			cout << " |___ \\  \\ \\        / /_   _| \\ | |/ ____|" << endl;
			cout << "   __) |  \\ \\  /\\  / /  | | |  \\| | (___  " << endl;
			cout << "  |__ <    \\ \\/  \\/ /   | | | . ` |\\___ \\ " << endl;
			cout << "  ___) |    \\  /\\  /   _| |_| |\\  |____) |" << endl;
			cout << " |____/      \\/  \\/   |_____|_| \\_|_____/ " << endl;
		break;
	}
		case 4: {
			cout << "  _  _    __          _______ _   _  _____ " << endl;
			cout << " | || |   \\ \\        / /_   _| \\ | |/ ____|" << endl;
			cout << " | || |_   \\ \\  /\\  / /  | | |  \\| | (___  " << endl;
			cout << " |__   _|   \\ \\/  \\/ /   | | | . ` |\\___ \\ " << endl;
			cout << "    | |      \\  /\\  /   _| |_| |\\  |____) |" << endl;
			cout << "    |_|       \\/  \\/   |_____|_| \\_|_____/ " << endl;
		break;
	}
		case 5: {
			cout << "  _____  __          _______ _   _  _____ " << endl;
			cout << " | ____| \\ \\        / /_   _| \\ | |/ ____|" << endl;
			cout << " | |__    \\ \\  /\\  / /  | | |  \\| | (___  " << endl;
			cout << " |___ \\    \\ \\/  \\/ /   | | | . ` |\\___ \\ " << endl;
			cout << "  ___) |    \\  /\\  /   _| |_| |\\  |____) |" << endl;
			cout << " |____/      \\/  \\/   |_____|_| \\_|_____/ " << endl;
		break;
	}
		case 6: {
			cout << "    __   __          _______ _   _  _____ " << endl;
			cout << "   / /   \\ \\        / /_   _| \\ | |/ ____|" << endl;
			cout << "  / /_    \\ \\  /\\  / /  | | |  \\| | (___  " << endl;
			cout << " | '_ \\    \\ \\/  \\/ /   | | | . ` |\\___ \\ " << endl;
			cout << " | (_) |    \\  /\\  /   _| |_| |\\  |____) |" << endl;
			cout << "  \\___/      \\/  \\/   |_____|_| \\_|_____/ " << endl;
		break;
	}
		case 10: {
			cout << " __     ______  _    _   _      ____   _____ ______ " << endl;
			cout << " \\ \\   / / __ \\| |  | | | |    / __ \\ / ____|  ____|" << endl;
			cout << "  \\ \\_/ / |  | | |  | | | |   | |  | | (___ | |__   " << endl;
			cout << "   \\   /| |  | | |  | | | |   | |  | |\\___ \\|  __|  " << endl;
			cout << "    | | | |__| | |__| | | |___| |__| |____) | |____ " << endl;
			cout << "    |_|  \\____/ \\____/  |______\\____/|_____/|______|" << endl;
			break;
		}
		case 11: {
			cout << "  ______      _ _     _   _                                       " << endl;
			cout << " |  ____|    (_) |   | | | |                                      " << endl;
			cout << " | |__  __  ___| |_  | |_| |__   ___   _ __ ___   ___ _ __  _   _ " << endl;
			cout << " |  __| \\ \\/ / | __| | __| '_ \\ / _ \\ | '_ ` _ \\ / _ \\ '_ \\| | | |" << endl;
			cout << " | |____ >  <| | |_  | |_| | | |  __/ | | | | | |  __/ | | | |_| |" << endl;
			cout << " |______/_/\\_\\_|\\__|  \\__|_| |_|\\___| |_| |_| |_|\\___|_| |_|\\__,_|" << endl;
			break;
		}
		case 12: {
			cout << " __     __          __          ___         _   _   _ " << endl;
			cout << " \\ \\   / /          \\ \\        / (_)       | | | | | |" << endl;
			cout << "  \\ \\_/ /__  _   _   \\ \\  /\\  / / _ _ __   | | | | | |" << endl;
			cout << "   \\   / _ \\| | | |   \\ \\/  \\/ / | | '_ \\  | | | | | |" << endl;
			cout << "    | | (_) | |_| |    \\  /\\  /  | | | | | |_| |_| |_|" << endl;
			cout << "    |_|\\___/ \\__,_|     \\/  \\/   |_|_| |_| (_) (_) (_)" << endl;
			break;
		}
		default: {
			break;
		}
	}
}

void v_crew() {
	int i_sleep = 100, i_lines = 28;
	bool b_fl = true;
	thread thr(v_thread, ref(b_fl));
	try {
				thr.detach();
			} catch(const exception &ex) {
				 cout << ex.what() << endl;
			}
	for (int i = 0; (i <= i_lines) && (b_fl); i++) {
		int i_i = 0;
		switch (i) {
			case 0: {
				cout << endl << endl << endl;
				break;
			}
			case 1: {
				cout << "  _____             _       _               " << endl;
				break;
			}
			case 2: {
				cout << " |  __ \\           | |     | |              " << endl;
				break;
			}
			case 3: {
				cout << " | |  | | __ _ _ __| | __ _| | _____  _ __  " << endl;
				break;
			}
			case 4: {
				cout << " | |  | |/ _` | '__| |/ _` | |/ / _ \\| '_ \\ " << endl;
				break;
			}
			case 5: {
				cout << " | |__| | (_| | |  | | (_| |   < (_) | | | |" << endl;
				break;
			}
			case 6: {
				cout << " |_____/ \\__,_|_|  |_|\\__,_|_|\\_\\___/|_| |_|" << endl;
				break;
			}
			case 7: {
				cout << endl;
				break;
			}
			case 8: {
				cout << "   _____                  _      _                  " << endl;
				break;
			}
			case 9: {
				cout << "  / ____|                | |    (_)                 " << endl;
				break;
			}
			case 10: {
				cout << " | (___   __ ___   ____ _| |     _  ___  _ __   ___ " << endl;
				break;
			}
			case 11: {
				cout << "  \\___ \\ / _` \\ \\ / / _` | |    | |/ _ \\| '_ \\ / _ \\" << endl;
				break;
			}
			case 12: {
				cout << "  ____) | (_| |\\ V / (_| | |____| | (_) | | | |  __/" << endl;
				break;
			}
			case 13: {
				cout << " |_____/ \\__,_| \\_/ \\__,_|______|_|\\___/|_| |_|\\___|" << endl;
				break;
			}
			case 14: {
				cout << endl;
				break;
			}
			case 15: {
				cout << "  ____                  _ _ _   " << endl;
				break;
			}
			case 16: {
				cout << " |  _ \\                | (_) |  " << endl;
				break;
			}
			case 17: {
				cout << " | |_) | __ _ _ __   __| |_| |_ " << endl;
				break;
			}
			case 18: {
				cout << " |  _ < / _` | '_ \\ / _` | | __|" << endl;
				break;
			}
			case 19: {
				cout << " | |_) | (_| | | | | (_| | | |_ " << endl;
				break;
			}
			case 20: {
				cout << " |____/ \\__,_|_| |_|\\__,_|_|\\__|" << endl;
				break;
			}
			case 21: {
				cout << endl;
				break;
			}
			case 22: {
				cout << "  _                           " << endl;
				break;
			}
			case 23: {
				cout << " | |                          " << endl;
				break;
			}
			case 24: {
				cout << " | |     __ _ _ __ ___   __ _ " << endl;
				break;
			}
			case 25: {
				cout << " | |    / _` | '_ ` _ \\ / _` |" << endl;
				break;
			}
			case 26: {
				cout << " | |___| (_| | | | | | | (_| |" << endl;
				break;
			}
			case 27: {
				cout << " |______\\__,_|_| |_| |_|\\__,_|" << endl;
				break;
			}
			case 28: {
				cout << endl;
				break;
			}
			default: {
				break;
			}
		}
		Sleep(i_sleep);
	}
	return;
}

void v_thread(bool &b_fl) {
	int i_key = _getch();
	b_fl = false;
	return;
}
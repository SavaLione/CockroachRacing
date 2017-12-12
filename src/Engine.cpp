#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <Windows.h>
using namespace std;

inline void v_engine_graphic(const int i_max1, const int i_max2, int i_m1, int i_m2, int(&i_m2_stroke)[6][101], int i_win, int i_win_stroke);
inline void print_select_cockroach(int choice, int money);
inline void v_win(int i_win);

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
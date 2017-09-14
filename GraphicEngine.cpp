#include <iostream>
#include <string>
#include <conio.h>
#include <Windows.h>
using namespace std;
void v_small(int i_arg); //
void v_static(); //
//void v_win(int i_win);
void v_engine_graphic(const int i_max1, const int i_max2, int i_m1, int i_m2, int(&i_m2_stroke)[6][101], int i_win, int i_win_stroke) {
	string s_bug = "<@><";
	{
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
				{
					for (int i = 0; i <= i_m1; i++) {
						switch (i) {
						case 0: {
							v_small(10);
							cout << "[1]";
							{
								if ((i_win == i) && (i_stroke == i_win_stroke)) {
									v_small(40);
								} else {
									for (int i_i = 0; i_i <= 81; i_i++) {
										if (i_m2_stroke[i][i_stroke] == i_i) {
											cout << s_bug;
										}
										else {
											cout << " ";
										}
									}
								}
							}
							cout << "|#|" << endl;
							break;
						}
						case 1: {
							v_small(20);
							cout << "[2]";
							{
								if ((i_win == i) && (i_stroke == i_win_stroke)) {
									v_small(40);
								}
								else {
									for (int i_i = 0; i_i <= 81; i_i++) {
										if (i_m2_stroke[i][i_stroke] == i_i) {
											cout << s_bug;
										}
										else {
											cout << " ";
										}
									}
								}
							}
							cout << "|#|" << endl;
							break;
						}
						case 2: {
							v_small(20);
							cout << "[3]";
							{
								if ((i_win == i) && (i_stroke == i_win_stroke)) {
									v_small(40);
								}
								else {
									for (int i_i = 0; i_i <= 81; i_i++) {
										if (i_m2_stroke[i][i_stroke]== i_i) {
											cout << s_bug;
										}
										else {
											cout << " ";
										}
									}
								}
							}
							cout << "|#|" << endl;
							break;
						}
						case 3: {
v_small(20);
cout << "[4]";
{
	if ((i_win == i) && (i_stroke == i_win_stroke)) {
		v_small(40);
	}
	else {
		for (int i_i = 0; i_i <= 81; i_i++) {
			if (i_m2_stroke[i][i_stroke] == i_i) {
				cout << s_bug;
			}
			else {
				cout << " ";
			}
		}
	}
}
cout << "|#|" << endl;
break;
						}
						case 4: {
							v_small(20);
							cout << "[5]";
							{
								if ((i_win == i) && (i_stroke == i_win_stroke)) {
									v_small(40);
								}
								else {
									for (int i_i = 0; i_i <= 81; i_i++) {
										if (i_m2_stroke[i][i_stroke] == i_i) {
											cout << s_bug;
										}
										else {
											cout << " ";
										}
									}
								}
							}
							cout << "|#|" << endl;
							break;
						}
						case 5: {
							v_small(20);
							cout << "[6]";
							{
								if ((i_win == i) && (i_stroke == i_win_stroke)) {
									v_small(40);
								}
								else {
									for (int i_i = 0; i_i <= 81; i_i++) {
										if (i_m2_stroke[i][i_stroke] == i_i) {
											cout << s_bug;
										}
										else {
											cout << " ";
										}
									}
								}
							}
							cout << "|#|" << endl;
							v_small(10);
							break;
						}
						default:
							break;
						}
					}
				}
				while (b_fl) {
					int x = _getch();
					//cout << x << endl;
					switch (x) {
					case 32: {
						system("cls");
						i_stroke++;
						b_fl = false;
						//cout << "\ta" << endl;
						break;
					}
					case 75: {
						system("cls");
						i_stroke -= 2;
						b_fl = false;
						//cout << "\ta" << endl;
						break;
					}
					case 77: {
						system("cls");
						i_stroke++;
						b_fl = false;
						//cout << "\ta" << endl;
						break;
					}
					case 13: {
						system("cls");
						i_stroke++;
						b_fl = false;
						//cout << "\ta" << endl;
						break;
					}
					default:
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
		cout << "[" << (i_num + 1) << "]" << "                                                                                     " << "|#|" << endl;
		break;
	}
	case 4: {
		cout << "                                                                                 <@><";
		break;
	}
	default:
		break;
	}
}

void v_win(int i_win) {
	bool b_fl = true;
	switch (i_win) {
		case 1: {
		{
			cout << "  __  __          _______ _   _  _____ " << endl;
			cout << " /_ | \\ \\        / /_   _| \\ | |/ ____|" << endl;
			cout << "  | |  \\ \\  /\\  / /  | | |  \\| | (___  " << endl;
			cout << "  | |   \\ \\/  \\/ /   | | | . ` |\\___ \\ " << endl;
			cout << "  | |    \\  /\\  /   _| |_| |\\  |____) |" << endl;
			cout << "  |_|     \\/  \\/   |_____|_| \\_|_____/ " << endl;
		}
		break;
	}
		case 2: {
		{
			cout << "  ___   __          _______ _   _  _____ " << endl;
			cout << " |__ \\  \\ \\        / /_   _| \\ | |/ ____|" << endl;
			cout << "    ) |  \\ \\  /\\  / /  | | |  \\| | (___  " << endl;
			cout << "   / /    \\ \\/  \\/ /   | | | . ` |\\___ \\ " << endl;
			cout << "  / /_     \\  /\\  /   _| |_| |\\  |____) |" << endl;
			cout << " |____|     \\/  \\/   |_____|_| \\_|_____/ " << endl;
		}
		break;
	}
		case 3: {
		{
			cout << "  ____   __          _______ _   _  _____ " << endl;
			cout << " |___ \\  \\ \\        / /_   _| \\ | |/ ____|" << endl;
			cout << "   __) |  \\ \\  /\\  / /  | | |  \\| | (___  " << endl;
			cout << "  |__ <    \\ \\/  \\/ /   | | | . ` |\\___ \\ " << endl;
			cout << "  ___) |    \\  /\\  /   _| |_| |\\  |____) |" << endl;
			cout << " |____/      \\/  \\/   |_____|_| \\_|_____/ " << endl;
		}
		break;
	}
		case 4: {
		{
			cout << "  _  _    __          _______ _   _  _____ " << endl;
			cout << " | || |   \\ \\        / /_   _| \\ | |/ ____|" << endl;
			cout << " | || |_   \\ \\  /\\  / /  | | |  \\| | (___  " << endl;
			cout << " |__   _|   \\ \\/  \\/ /   | | | . ` |\\___ \\ " << endl;
			cout << "    | |      \\  /\\  /   _| |_| |\\  |____) |" << endl;
			cout << "    |_|       \\/  \\/   |_____|_| \\_|_____/ " << endl;
		}
		break;
	}
		case 5: {
		{
			cout << "  _____  __          _______ _   _  _____ " << endl;
			cout << " | ____| \\ \\        / /_   _| \\ | |/ ____|" << endl;
			cout << " | |__    \\ \\  /\\  / /  | | |  \\| | (___  " << endl;
			cout << " |___ \\    \\ \\/  \\/ /   | | | . ` |\\___ \\ " << endl;
			cout << "  ___) |    \\  /\\  /   _| |_| |\\  |____) |" << endl;
			cout << " |____/      \\/  \\/   |_____|_| \\_|_____/ " << endl;
		}
		break;
	}
		case 6: {
		{
			cout << "    __   __          _______ _   _  _____ " << endl;
			cout << "   / /   \\ \\        / /_   _| \\ | |/ ____|" << endl;
			cout << "  / /_    \\ \\  /\\  / /  | | |  \\| | (___  " << endl;
			cout << " | '_ \\    \\ \\/  \\/ /   | | | . ` |\\___ \\ " << endl;
			cout << " | (_) |    \\  /\\  /   _| |_| |\\  |____) |" << endl;
			cout << "  \\___/      \\/  \\/   |_____|_| \\_|_____/ " << endl;
		}
		break;
	}
		case 10: {
			{
				cout << " __     ______  _    _   _      ____   _____ ______ " << endl;
				cout << " \\ \\   / / __ \\| |  | | | |    / __ \\ / ____|  ____|" << endl;
				cout << "  \\ \\_/ / |  | | |  | | | |   | |  | | (___ | |__   " << endl;
				cout << "   \\   /| |  | | |  | | | |   | |  | |\\___ \\|  __|  " << endl;
				cout << "    | | | |__| | |__| | | |___| |__| |____) | |____ " << endl;
				cout << "    |_|  \\____/ \\____/  |______\\____/|_____/|______|" << endl;
			}
			break;
		}
		case 11: {
			{
				cout << "  ______      _ _     _   _                                       " << endl;
				cout << " |  ____|    (_) |   | | | |                                      " << endl;
				cout << " | |__  __  ___| |_  | |_| |__   ___   _ __ ___   ___ _ __  _   _ " << endl;
				cout << " |  __| \\ \\/ / | __| | __| '_ \\ / _ \\ | '_ ` _ \\ / _ \\ '_ \\| | | |" << endl;
				cout << " | |____ >  <| | |_  | |_| | | |  __/ | | | | | |  __/ | | | |_| |" << endl;
				cout << " |______/_/\\_\\_|\\__|  \\__|_| |_|\\___| |_| |_| |_|\\___|_| |_|\\__,_|" << endl;
			}
			break;
		}
		default:
			break;
	}
	while (b_fl) {
		int x = _getch();
		switch (x) {
		case 32: {
			b_fl = false;
			break;
		}
		case 13: {
			b_fl = false;
			break;
		}
		case 80: {
			b_fl = false;
			break;
		}
		default:
			break;
		}
	}
}

void v_autors(int i_autors) {
	bool b_fl = true; //cout << "" << endl;
	switch (i_autors) {
	case 1: {
		{
			cout << "  _____             _       _               " << endl;
			cout << " |  __ \\           | |     | |              " << endl;
			cout << " | |  | | __ _ _ __| | __ _| | _____  _ __  " << endl;
			cout << " | |  | |/ _` | '__| |/ _` | |/ / _ \\| '_ \\ " << endl;
			cout << " | |__| | (_| | |  | | (_| |   < (_) | | | |" << endl;
			cout << " |_____/ \\__,_|_|  |_|\\__,_|_|\\_\\___/|_| |_|" << endl;
		}
		break;
	}
	case 2: {
		{
			cout << "   _____                  _      _                  " << endl;
			cout << "  / ____|                | |    (_)                 " << endl;
			cout << " | (___   __ ___   ____ _| |     _  ___  _ __   ___ " << endl;
			cout << "  \\___ \\ / _` \\ \\ / / _` | |    | |/ _ \\| '_ \\ / _ \\" << endl;
			cout << "  ____) | (_| |\\ V / (_| | |____| | (_) | | | |  __/" << endl;
			cout << " |_____/ \\__,_| \\_/ \\__,_|______|_|\\___/|_| |_|\\___|" << endl;
		}
		break;
	}
	case 3: {
		{
			cout << "  ____                  _ _ _   " << endl;
			cout << " |  _ \\                | (_) |  " << endl;
			cout << " | |_) | __ _ _ __   __| |_| |_ " << endl;
			cout << " |  _ < / _` | '_ \\ / _` | | __|" << endl;
			cout << " | |_) | (_| | | | | (_| | | |_ " << endl;
			cout << " |____/ \\__,_|_| |_|\\__,_|_|\\__|" << endl;
		}
		break;
	}
	case 4: {
		{
			cout << "  _                           " << endl;
			cout << " | |                          " << endl;
			cout << " | |     __ _ _ __ ___   __ _ " << endl;
			cout << " | |    / _` | '_ ` _ \\ / _` |" << endl;
			cout << " | |___| (_| | | | | | | (_| |" << endl;
			cout << " |______\\__,_|_| |_| |_|\\__,_|" << endl;
		}
		break;
	}
	default:
		break;
	}
	while (b_fl) {
		int x = _getch();
		switch (x) {
		case 32: {
			b_fl = false;
			break;
		}
		case 13: {
			b_fl = false;
			break;
		}
		case 80: {
			b_fl = false;
			break;
		}
		default:
			break;
		}
	}
}

void v_crew() {
	int i_sleep = 160;
	{
		Sleep(i_sleep);
		cout << "  _____             _       _               " << endl;
		Sleep(i_sleep);
		cout << " |  __ \\           | |     | |              " << endl;
		Sleep(i_sleep);
		cout << " | |  | | __ _ _ __| | __ _| | _____  _ __  " << endl;
		Sleep(i_sleep);
		cout << " | |  | |/ _` | '__| |/ _` | |/ / _ \\| '_ \\ " << endl;
		Sleep(i_sleep);
		cout << " | |__| | (_| | |  | | (_| |   < (_) | | | |" << endl;
		Sleep(i_sleep);
		cout << " |_____/ \\__,_|_|  |_|\\__,_|_|\\_\\___/|_| |_|" << endl;
		Sleep(i_sleep);
	}

	{
		Sleep(i_sleep);
		cout << "   _____                  _      _                  " << endl;
		Sleep(i_sleep);
		cout << "  / ____|                | |    (_)                 " << endl;
		Sleep(i_sleep);
		cout << " | (___   __ ___   ____ _| |     _  ___  _ __   ___ " << endl;
		Sleep(i_sleep);
		cout << "  \\___ \\ / _` \\ \\ / / _` | |    | |/ _ \\| '_ \\ / _ \\" << endl;
		Sleep(i_sleep);
		cout << "  ____) | (_| |\\ V / (_| | |____| | (_) | | | |  __/" << endl;
		Sleep(i_sleep);
		cout << " |_____/ \\__,_| \\_/ \\__,_|______|_|\\___/|_| |_|\\___|" << endl;
		Sleep(i_sleep);
	}

	{
		Sleep(i_sleep);
		cout << "  ____                  _ _ _   " << endl;
		Sleep(i_sleep);
		cout << " |  _ \\                | (_) |  " << endl;
		Sleep(i_sleep);
		cout << " | |_) | __ _ _ __   __| |_| |_ " << endl;
		Sleep(i_sleep);
		cout << " |  _ < / _` | '_ \\ / _` | | __|" << endl;
		Sleep(i_sleep);
		cout << " | |_) | (_| | | | | (_| | | |_ " << endl;
		Sleep(i_sleep);
		cout << " |____/ \\__,_|_| |_|\\__,_|_|\\__|" << endl;
		Sleep(i_sleep);
	}

	{
		Sleep(i_sleep);
		cout << "  _                           " << endl;
		Sleep(i_sleep);
		cout << " | |                          " << endl;
		Sleep(i_sleep);
		cout << " | |     __ _ _ __ ___   __ _ " << endl;
		Sleep(i_sleep);
		cout << " | |    / _` | '_ ` _ \\ / _` |" << endl;
		Sleep(i_sleep);
		cout << " | |___| (_| | | | | | | (_| |" << endl;
		Sleep(i_sleep);
		cout << " |______\\__,_|_| |_| |_|\\__,_|" << endl;
		Sleep(i_sleep);
	}
}
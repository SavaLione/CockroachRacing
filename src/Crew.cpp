#include <iostream>
#include <thread>
#include <conio.h>
#include <Windows.h>

using namespace std;

void v_thread(bool &b_fl);

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
}

void v_thread(bool &b_fl) {
	int i_key = _getch();
	b_fl = false;
}
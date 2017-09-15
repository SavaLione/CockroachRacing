#include <iostream>
#include <conio.h>
using namespace std;

void v_autors(int i_autors) {
	bool b_fl = true; //cout << "" << endl;
	switch (i_autors) {
		case 1: {
		cout << "  _____             _       _               " << endl;
		cout << " |  __ \\           | |     | |              " << endl;
		cout << " | |  | | __ _ _ __| | __ _| | _____  _ __  " << endl;
		cout << " | |  | |/ _` | '__| |/ _` | |/ / _ \\| '_ \\ " << endl;
		cout << " | |__| | (_| | |  | | (_| |   < (_) | | | |" << endl;
		cout << " |_____/ \\__,_|_|  |_|\\__,_|_|\\_\\___/|_| |_|" << endl;
		break;
	}
		case 2: {
		cout << "   _____                  _      _                  " << endl;
		cout << "  / ____|                | |    (_)                 " << endl;
		cout << " | (___   __ ___   ____ _| |     _  ___  _ __   ___ " << endl;
		cout << "  \\___ \\ / _` \\ \\ / / _` | |    | |/ _ \\| '_ \\ / _ \\" << endl;
		cout << "  ____) | (_| |\\ V / (_| | |____| | (_) | | | |  __/" << endl;
		cout << " |_____/ \\__,_| \\_/ \\__,_|______|_|\\___/|_| |_|\\___|" << endl;
		break;
	}
		case 3: {
		cout << "  ____                  _ _ _   " << endl;
		cout << " |  _ \\                | (_) |  " << endl;
		cout << " | |_) | __ _ _ __   __| |_| |_ " << endl;
		cout << " |  _ < / _` | '_ \\ / _` | | __|" << endl;
		cout << " | |_) | (_| | | | | (_| | | |_ " << endl;
		cout << " |____/ \\__,_|_| |_|\\__,_|_|\\__|" << endl;
		break;
	}
		case 4: {
		cout << "  _                           " << endl;
		cout << " | |                          " << endl;
		cout << " | |     __ _ _ __ ___   __ _ " << endl;
		cout << " | |    / _` | '_ ` _ \\ / _` |" << endl;
		cout << " | |___| (_| | | | | | | (_| |" << endl;
		cout << " |______\\__,_|_| |_| |_|\\__,_|" << endl;
		break;
	}
		default: {
		break;
	}
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
			default: {
			break;
		}
		}
	}
}
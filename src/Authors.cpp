#include <iostream>
#include <conio.h>

#include "CockroachRacing.h"

using namespace std;

void v_autors(int i_autors) {
	bool b_fl = true;
	switch (i_autors) {
		case 1: {
			cout << cockroachracing::darlakon;
			break;
		}
		case 2: {
			cout << cockroachracing::savalione;
			break;
		}
		case 3: {
			cout << cockroachracing::bandit;
			break;
		}
		case 4: {
			cout << cockroachracing::lama;
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
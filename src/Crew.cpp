#include <iostream>
#include <thread>
#include <conio.h>
#include <Windows.h>

#include "CockroachRacing.h"

using namespace std;
using namespace cockroachracing;

void v_thread(bool &b_fl);

void v_crew() {
	cout << darlakon << endl;
	cout << savalione << endl;
	cout << bandit << endl;
	cout << lama << endl;
	_getch();
}

void v_thread(bool &b_fl) {
	_getch();
	b_fl = false;
}
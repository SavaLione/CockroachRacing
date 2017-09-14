#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void v_engine_wastebasket() {
	bool b_fl = true;
	int i_m2_stroke[6][101]; // i_m2_stroke[i][z]; //if (i_m2_stroke[i][z - 1] == 0) {}
	srand(time(NULL));
	{
		for (int i = 0; i <= 5; i++) {
			for (int z = 0; z <= 100; z++) {
				i_m2_stroke[i][z] = 0;
			}
		}
	}

	{
		for (int i = 0; i <= 5; i++) {
			for (int z = 0; z <= 100; z++) {
				if ((z != 0) && (i_m2_stroke[i][z - 1] >= 86)) {
					i_m2_stroke[i][z] = 0;
				} else {
					if ((rand() % 10) < 3) {
						if ((rand() % 10) < 3) {
							if ((rand() % 2) == 1) {
								{
									if ((i_m2_stroke[i][z - 1] >= 71) && (b_fl)) {
										switch (i_m2_stroke[i][z - 1]) {
										case 71: {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 15;
											b_fl = false;
											break;
										}
										case 72: {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 14;
											b_fl = false;
											break;
										}
										case 73: {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 13;
											b_fl = false;
											break;
										}
										case 74: {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 12;
											b_fl = false;
											break;
										}
										case 75: {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 11;
											b_fl = false;
											break;
										}
										case 76: {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 10;
											b_fl = false;
											break;
										}
										case 77: {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 9;
											b_fl = false;
											break;
										}
										case 78: {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 8;
											b_fl = false;
											break;
										}
										case 79: {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 7;
											b_fl = false;
											break;
										}
										case 80: {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 6;
											b_fl = false;
											break;
										}
										case 81: {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 5;
											b_fl = false;
											break;
										}
										case 82: {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 4;
											b_fl = false;
											break;
										}
										case 83: {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 3;
											b_fl = false;
											break;
										}
										case 84: {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 2;
											b_fl = false;
											break;
										}
										case 85: {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 1;
											b_fl = false;
											break;
										}
										case 86: {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 0;
											b_fl = false;
											break;
										}
										default:
											break;
										}
									} else {
										if (z == 0) {
											i_m2_stroke[i][z] = i_m2_stroke[i][z] + 15;
										} else {
											i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 15;
										}
									}

								}
							}
							else {
								if (z == 0) {
									i_m2_stroke[i][z] = i_m2_stroke[i][z] + 0;
								}
								else {
									i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 0;
								}
							}
						}
						else {
							{
								if ((i_m2_stroke[i][z - 1] >= 72) && (b_fl)) {
									switch (i_m2_stroke[i][z - 1]) {
									case 72: {
										i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 14;
										b_fl = false;
										break;
									}
									case 73: {
										i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 13;
										b_fl = false;
										break;
									}
									case 74: {
										i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 12;
										b_fl = false;
										break;
									}
									case 75: {
										i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 11;
										b_fl = false;
										break;
									}
									case 76: {
										i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 10;
										b_fl = false;
										break;
									}
									case 77: {
										i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 9;
										b_fl = false;
										break;
									}
									case 78: {
										i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 8;
										b_fl = false;
										break;
									}
									case 79: {
										i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 7;
										b_fl = false;
										break;
									}
									case 80: {
										i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 6;
										b_fl = false;
										break;
									}
									case 81: {
										i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 5;
										b_fl = false;
										break;
									}
									case 82: {
										i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 4;
										b_fl = false;
										break;
									}
									case 83: {
										i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 3;
										b_fl = false;
										break;
									}
									case 84: {
										i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 2;
										b_fl = false;
										break;
									}
									case 85: {
										i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 1;
										b_fl = false;
										break;
									}
									case 86: {
										i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 0;
										b_fl = false;
										break;
									}
									default:
										break;
									}
								}
								else {
									if (z == 0) {
										i_m2_stroke[i][z] = i_m2_stroke[i][z] + 14;
									}
									else {
										i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 14;
									}
								}

							}
						}
					}
					else {
						if ((i_m2_stroke[i][z - 1] >= 73) && (b_fl)) {
							switch (i_m2_stroke[i][z - 1]) {
							case 73: {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 13;
								b_fl = false;
								break;
							}
							case 74: {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 12;
								b_fl = false;
								break;
							}
							case 75: {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 11;
								b_fl = false;
								break;
							}
							case 76: {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 10;
								b_fl = false;
								break;
							}
							case 77: {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 9;
								b_fl = false;
								break;
							}
							case 78: {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 8;
								b_fl = false;
								break;
							}
							case 79: {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 7;
								b_fl = false;
								break;
							}
							case 80: {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 6;
								b_fl = false;
								break;
							}
							case 81: {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 5;
								b_fl = false;
								break;
							}
							case 82: {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 4;
								b_fl = false;
								break;
							}
							case 83: {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 3;
								b_fl = false;
								break;
							}
							case 84: {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 2;
								b_fl = false;
								break;
							}
							case 85: {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 1;
								b_fl = false;
								break;
							}
							case 86: {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 0;
								b_fl = false;
								break;
							}
							default:
								break;
							}
						}
						else {
							if (z == 0) {
								i_m2_stroke[i][z] = i_m2_stroke[i][z] + 13;
							}
							else {
								i_m2_stroke[i][z] = i_m2_stroke[i][z - 1] + 13;
							}
						}

					}
				}
			}
		}
	}




	{
		for (int i = 0; i <= 5; i++) {
			for (int z = 0; z <= 100; z++) {
				cout << " " << i_m2_stroke[i][z];
			}
			cout << endl;
		}
	}
}
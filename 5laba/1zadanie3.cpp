﻿#include <iostream>
using namespace std;
int main() {
	setlocale(LC_CTYPE, "Russian");
	float c = 2.1, r = 4e-4, m=1, j, h, y,i;
	while (m <= 2) {
		for (i = 0; i < 4; i++) {
			cin >> j;
			h = (10 * r - j) / (c * c + exp(-m));
			y = (h * m - j * j) + pow((1 / 10 * c), 2);
			cout << "h=" << h << "y=" << y << "\n";
			m = m + 0.5;
		}
	}
	return 0;
}
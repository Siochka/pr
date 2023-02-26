#include <iostream>
#include <cmath>
#include "figure.h"

using namespace std;


int main() {
	figure mas[3]{};
	float x1, x2, x3, x4;
	float y1, y2, y3, y4;
	for (int i = 0; i < 3; i++) {
		cout << "¬ведите параметры четырЄхугольника є " << i + 1 << " через пробел в формате (х1, у1) (х2, у2)..." << endl;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		mas[i].Figure(x1, x2, x3, x4, y1, y2, y3, y4);
	}
	for (int i = 0; i < 3; i++) {
		mas[i].show(i + 1);
		mas[i].is_prug();
		mas[i].is_square();
		mas[i].is_romb();
		mas[i].is_in_circle();
		mas[i].is_out_circle();
	}
}
#include <iostream>
#include <cmath>
#incluse "circle.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");

	Circle mas[3]{};
	float radius, x_center, y_center;
	float a, b, c;
	float r, x_cntr, y_cntr;

	for (int i = 0; i < 3; i++) {
		cout << "Введите радиус, центр по Х и центр по У окружности № " << i + 1 << " через пробел " << endl;
		cin >> radius >> x_center >> y_center;
		mas[i].set_circle(radius, x_center, y_center);
	}

	cout << "введите радиус, центр по Х и центр по У дополнительной окружности" << endl;
	cin >> r >> x_cntr >> y_cntr;

	cout << "введите стороны треугольника " << endl;
	cin >> a >> b >> c;

	for (int i = 0; i < 3; i++) {
		cout << "площадь окружности №" << i+1 << ": " << mas[i].square() << endl;
		if (mas[i].triangle_around(a, b, c)) {
			cout << "Окружность № " << i + 1 << " можно вписать в треугольник" << endl;
		}
		else {
			cout << "Окружность № " << i + 1 << " нельзя вписать в треугольник" << endl;
		}
		if (mas[i].triangle_in(a, b, c)) {
			cout << "В окружность № " << i + 1 << " можно вписать в треугольник" << endl;
		}
		else {
			cout << "В окружность № " << i + 1 << " нельзя вписать в треугольник" << endl;
		}
		if (mas[i].check_circle(r, x_cntr, y_cntr)) {
			cout << "окружность № " << i + 1 << " и дополнительная пересекаются" << endl;
		}
		else {
			cout << "окружность № " << i + 1 << " и дополнительная не пересекаются" << endl;
		}
	}
	return 0;
}
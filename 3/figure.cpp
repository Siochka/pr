#include <iostream>
#include <cmath>
#include "figure.h"

using namespace std;

float figure::len(float x1l, float x2l, float y1l, float y2l) {
	return (sqrt((x2l - x1l) * (x2l - x1l) + (y2l - y1l) * (y2l - y1l)));
}

float figure::angle(float x11, float x12, float x21, float x22, float y11, float y12, float y21, float y22) {
	float x1 = x11 - x21;
	float y1 = y11 - y21;
	float x2 = x12 - x22;
	float y2 = y12 - y22;

	return ((180 / 3.14) * acos((abs(x1 * x2 + y1 * y2)) / (sqrt(x1 * x1 + y1 * y1) * sqrt(x2 * x2 + y2 * y2))));
}

void figure::Figure(float X1, float X2, float X3, float X4, float Y1, float Y2, float Y3, float Y4) {
	x1 = X1;
	x2 = X2;
	x3 = X3;
	x4 = X4;
	y1 = Y1;
	y2 = Y2;
	y3 = Y3;
	y4 = Y4;
	P = len(X1, X2, Y1, Y2) + len(X2, X3, Y2, Y3) + len(X3, X4, Y3, Y4) + len(X4, X1, Y4, Y1);
	S = 0.5 * sin(angle(X1, X2, X3, X4, Y1, Y2, Y3, Y4) / (180 / 3.14)) * len(X1, X3, Y1, Y3) * len(X2, X4, Y2, Y4);
}

void figure::show(int num) {
	cout << "Параметры четырёхугольника № " << num << ": (" << x1 << ", " << y1 << ") (" << x2 << ", " << y2 << ") (" << x3 << ", " << y3 << ") (" << x4 << ", " << y4 << ")" << endl;
	cout << "Его периметр равен " << P << endl;
	cout << "Его площадь равна " << S << endl;
}

bool figure::is_prug() {
	return ((angle(x1, x2, x1, x4, y1, y2, y1, y4) == 90) && (angle(x2, x1, x2, x3, y2, y1, y2, y3) == 90) && (angle(x3, x2, x3, x4, y3, y2, y3, y4) == 90) && (angle(x4, x1, x4, x3, y4, y1, y4, y3) == 90));
}

bool figure::is_square() {
	return ((angle(x1, x2, x1, x4, y1, y2, y1, y4) == 90) && (angle(x2, x1, x2, x3, y2, y1, y2, y3) == 90) && (angle(x3, x2, x3, x4, y3, y2, y3, y4) == 90) && ((angle(x4, x1, x4, x3, y4, y1, y4, y3) == 90)) && (len(x1, x2, y1, y2) == len(x2, x3, y2, y3)) && (len(x3, x4, y3, y4) == len(x1, x2, y1, y2)) && (len(x2, x3, y2, y3) == len(x3, x4, y3, y4)));
}

bool figure::is_romb() {
	return ((len(x1, x2, y1, y2) == len(x2, x3, y2, y3)) && (len(x3, x4, y3, y4) == len(x1, x2, y1, y2)) && (len(x2, x3, y2, y3) == len(x3, x4, y3, y4)));
}

bool figure::is_in_circle() {

	return (len(x1, x2, y1, y2) + len(x3, x4, y3, y4) == len(x2, x3, y2, y3) + len(x4, x1, y4, y1));
}

bool figure::is_out_circle() {
	return (angle(x1, x2, x1, x4, y1, y2, y1, y4) + angle(x3, x2, x3, x2, y3, y2, y3, y4) == angle(x2, x1, x2, x3, y2, y1, y2, y3) + angle(x4, x1, x4, x3, y4, y1, y4, y3));
}
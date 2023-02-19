#include <iostream>
#include <cmath>
#include "circle.h"

using namespace std;

void set_circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}
float square() {
	float s = 3.14 * radius * radius;
	return s;
}
bool triangle_around(float a, float b, float c) {
	double p = (a + b + c) / 2;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));
	return (radius >= ((a + b + c) / (4 * S)));
}
bool triangle_in(float a, float b, float c) {
	double p = (a + b + c) / 2;
	double S = sqrt(p * (p - a) * (p - b) * (p - c));
	return (radius <= S / p);
}
bool check_circle(float r, float x_cntr, float y_cntr) {
	float d = sqrt(pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2));
	return (radius + r <= d);
}
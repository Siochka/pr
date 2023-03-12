#include <iostream>
#include <cmath>
#include "rational.h"

using namespace std;

rational::rational() {
}
void rational::Rational(int a1, int b1) {
	if (b1 != 0) {
		a = a1 % b1;
		b = b1;
		for (int i = 2; i < b1; i++) {
			if (a1 % i == 0 && b1 % i == 0) {
				a = a1 / i;
				b = b1 / i;
			}
		}
	}
	else {
		cout << "Znamenatel' raven nulu" << endl;
	}
}
void rational::set(int a1, int b1) {
	return (Rational(a1, b1));
}
void rational::show() {
	cout << a << "/" << b << endl;
}
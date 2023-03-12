#include <iostream>
#include <cmath>
#include "rational.h"

using namespace std;


int main() {
	int n;
	cin >> n;
	rational* mas = new rational[n];
	for (int i = 0; i < n; i++) {
		int n_a, n_b;
		cin >> n_a >> n_b;
		mas[i].set(n_a, n_b);
	};
	for (int i = 0; i < n; i++) {
		mas[i].show();
	}
	delete[] mas;
	return 0;
}
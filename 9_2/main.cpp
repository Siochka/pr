#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

template <class T> void Sort_str(T& x, T& y) {
	T z, n;
	z = x.compare(y); {
		if (z > 0) {
			n = x;
			x = y;
			y = n;
		}
	}
}
template <class T> void Sort_num(T& x, T& y) {
	T z;
	if (x > y) {
		z = x;
		x = y;
		y = z;
	}
}
class S {
	vector <string> vec_str;
	vector <int> vec_num;


	void Mas_str(m) {

		int a;
		vec_str.reserve(5);
		for (int i = 0; i < vec_str.size(); i++) {
			cout << "Vvedite strochniy element nomer " << i + 1 << endl;
			cin >> a;
			vec_str.at(i) = a;
		}
		for (int i = 0; i < vec_str.size() - 1; i++) {
			Sort_str(vec_str[i], vec_str[i + 1]);
		}
		cout << "Otsortirovanniy massiv " << endl;
		for (int i = 0; i < vec_str.size(); i++) {
			cout << vec_str[i];
		}

	}

	void Mas_num(p) {

		int b;
		vec_num.reserve(5);
		for (int i = 0; i < vec_num.size(); i++) {
			cout << "Vvedite tsifrovoi element nomer " << i + 1 << endl;
			cin >> b;
			vec_num.at(i) = b;
		}
		for (int i = 0; i < vec_num.size() - 1; i++) {
			Sort_str(vec_num[i], vec_num[i + 1]);
		}
		cout << "Otsortirovanniy massiv " << endl;
		for (int i = 0; i < vec_num.size(); i++) {
			cout << vec_num[i];
		}

	}

};

int main() {
	int g, l;
	cout << "Esli massiv strok, vvedite 1, esli tsifr, vvedite 2 i kolichestvo elementov" << endl;
	cin >> g >> l;
	if (g == 1) {
		Mas_str(l);
	}
	if (g == 2) {
		Mas_num(l);
	}
}
#include <iostream>
#include <cmath>

using namespace std;

class rational {
private:
	int a, b;
public:
	rational();
	void Rational(int a1, int b1);
	void set(int a1, int b1);
	void show();
};
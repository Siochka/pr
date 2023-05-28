#include "zero.h"
using namespace std;

void Divisor::func_Divisor(int val, int del)
{
	double x, y;
	x = val; y = del;
	try {
		if (y == 0) throw runtime_error("nevozmozhno razdelit' na 0");
		cout << (x / y) << endl;
	}
	catch (runtime_error& e)
	{
		cout << e.what() << endl;
	}
}
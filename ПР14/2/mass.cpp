#include "mass_Divisor.h"
#include <iostream>
using namespace std;

void Divisior::mass_div(int mas[], int num)
{
	try {
		if (num > 3) throw runtime_error("Elementa s takim indeksom net \n");
		cout << mas[num] << endl;
	}
	catch (runtime_error& e) {
		cout << "runtime_error\n" << e.what();
	}
}
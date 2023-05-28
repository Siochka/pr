#include <iostream>
#include "mass.h"
using namespace std;

int main()
{
    int num;
    int mas[4] = { 1, 2, 3, 4 };
    cin >> num;
    Divisior::mass_div(mas, num);
}
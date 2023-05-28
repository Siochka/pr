#include "div.h"
#include <iostream>
#include <set>
usingn namespace std;

int main()
{
	set<double> nums;
	cout << "got: " << Divisior::get(nums) << endl;


	nums.insert(3);
	cout << "added 3;" << endl;
	cout << "got: " << Divisior::get(nums) << endl;

}

#pragma once
#include <set>
#include <iostream>
#include <stdexcept>
using namespace std;


class Divisior
{
public:
	template <class Div>
	static Div get(set<Div> set)
	{
		try {
			if (set.begin() == set.end()) throw out_of_range("Out of range");
			return *set.begin();
		}
		catch (out_of_range& e)
		{
			cout << e.what() << endl;
			return Div();
		}
	}
};
#pragma once
#include "ocean.h"
using namespace std;

class Sea : public Ocean {
private:
	string name;
	double depth;
	double area;
	Ocean* OCEAN;
public:
	Sea();
	Sea(string Name, double Depth, double Area, string Loc);
	Sea(Ocean& ocean, string Name, double Depth, double Area);
	friend ostream& operator << (ostream& stream, Sea sea);
	friend istream& operator >> (istream& stream, Sea& sea);
};
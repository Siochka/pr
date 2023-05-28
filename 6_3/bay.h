#pragma once
#include "ocean.h"
#include "sea.h"
using namespace std;

class Bay : public Sea, public Ocean {
private:
	string name;
	double depth;
	double area;
	Ocean* OCEAN;
	Sea* SEA;
protected:
	string loc;
public:
	Bay();
	Bay(string Name, double Depth, double Area, string Loc);
	Bay(Ocean& ocean, string Name, double Depth, double Area);
	Bay(Sea& sea, string Name, double Depth, double Area);
	string get_name();
	double get_depth();
	double get_area();
	string get_loc();
	friend ostream& operator << (ostream& stream, Bay bay);
	friend istream& operator >> (istream& stream, Bay& bay);
};
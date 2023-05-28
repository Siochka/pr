#pragma once
#include <string>
#include <iostream>
using namespace std;

class Ocean {
private:
	string name;
	double depth;
	double area;
protected:
	string loc;
public:
	Ocean();
	Ocean(string Name, double Depth, double Area, string Loc);
	string get_name();
	double get_depth();
	double get_area();
	string get_loc();
	friend ostream& operator << (ostream& stream, Ocean ocean);
	friend istream& operator >> (istream& stream, Ocean& ocean);
};
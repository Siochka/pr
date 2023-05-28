﻿#include "ocean.h"
using namespace std;

Ocean::Ocean() {
	name = "none";
	depth = 0;
	area = 0;
	loc = "none";
}
Ocean::Ocean(string Name, double Depth, double Area, string Loc) {
	name = Name;
	depth = Depth;
	area = Area;
	loc = Loc;
}
string Ocean::get_name() {
	return name;
}
double Ocean::get_depth() {
	return depth;
}
double Ocean::get_area() {
	return area;
}
string Ocean::get_loc() {
	return loc;
}
ostream& operator << (ostream& stream, Ocean ocean) {
	stream << ocean.area << " " << ocean.depth << " " << ocean.name << " " << ocean.loc << endl;
	return stream;
}
istream& operator >> (istream& stream, Ocean& ocean) {
	stream >> ocean.name >> ocean.depth >> ocean.area >> ocean.loc;
	return stream;
}
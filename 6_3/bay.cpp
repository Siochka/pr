#include "bay.h"
using namespace std;

Bay::Bay() {
	name = "none";
	depth = 0;
	area = 0;
	loc = "none";
}
Bay::Bay(string Name, double Depth, double Area, string Loc) {
	name = Name;
	depth = Depth;
	area = Area;
	loc = Loc;
}
Bay::Bay(Ocean& ocean, string Name, double Depth, double Area) {
	name = Name;
	depth = Depth;
	area = Area;
	OCEAN = &ocean;
	loc = Ocean::loc;
}
Bay::Bay(Sea& sea, string Name, double Depth, double Area) {
	name = Name;
	depth = Depth;
	area = Area;
	SEA = &sea;
	loc = Sea::loc;
}
string Bay::get_name() {
	return name;
}
double Bay::get_depth() {
	return depth;
}
double Bay::get_area() {
	return area;
}
string Bay::get_loc() {
	return loc;
}
ostream& operator << (ostream& stream, Bay bay) {
	stream << bay.area << " " << bay.depth << " " << bay.name << " " << bay.loc << endl;
	return stream;
}
istream& operator >> (istream& stream, Bay& bay) {
	stream >> bay.name >> bay.depth >> bay.area >> bay.loc;
	return stream;
}
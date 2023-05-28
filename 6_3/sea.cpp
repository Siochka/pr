#include "sea.h"
using namespace std;

Sea::Sea() {
	name = "none";
	depth = 0;
	area = 0;
	loc = "none";
}
Sea::Sea(string Name, double Depth, double Area, string Loc) {
	name = Name;
	depth = Depth;
	area = Area;
	loc = Loc;
}
Sea::Sea(Ocean& ocean, string Name, double Depth, double Area) :Ocean(ocean) {
	name = Name;
	depth = Depth;
	area = Area;
	OCEAN = &ocean;
	loc = Ocean::loc;
}
ostream& operator << (ostream& stream, Sea sea) {
	stream << sea.area << " " << sea.depth << " " << sea.name << " " << sea.loc << endl;
	return stream;
}
:istream& operator >> (istream& stream, Sea& sea) {
	stream >> sea.name >> sea.depth >> sea.area >> sea.loc;
	return stream;
}
#include "cone.h"
#include "conet.h"
using namespace std;

int main() {
	Cone_tr cone_1 = Cone_tr();
	cone_1.set_cone_cord(5.5, 6, 7.3);
	cone_1.set_cone_heig(10);
	cone_1.set_cone_rad(3);
	cone_1.set_cone_rad2(2);

	Cone cone_2(1, 1, 1, 5, 7.5);
	Cone_tr cone_tr_1 = Cone_tr(cone_2, 2);
	Cone_tr cone_tr_2 = Cone_tr(cone_2, 3);
	cout << cone_tr_1 << endl;
	cout << cone_tr_2 << endl;
	cout << cone_tr_1.volume_cone() << " " << cone_tr_1.area_cone() << endl;
	cout << cone_tr_2.volume_cone() << " " << cone_tr_2.area_cone() << endl;
	cout << (cone_tr_1 < cone_tr_2) << endl;
	cout << (cone_tr_1 > cone_tr_2) << endl;
	cout << (cone_tr_1 == cone_tr_2) << :endl;
	return 0;
}
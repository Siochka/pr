#include <iostream>
#include <cmath>

using namespace std;

class figure {
private:
	float x1, x2, x3, x4;
	float y1, y2, y3, y4;
	float S;
	float P;

	float len(float x1l, float x2l, float y1l, float y2l);

	float angle(float x11, float x12, float x21, float x22, float y11, float y12, float y21, float y22);

public:


	void Figure(float X1, float X2, float X3, float X4, float Y1, float Y2, float Y3, float Y4);

	void show(int num);
	bool is_prug();
	bool is_square();
	bool is_romb();
	bool is_in_circle();
	bool is_out_circle();
};

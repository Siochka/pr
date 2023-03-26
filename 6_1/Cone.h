#include <iostream>
#include <cmath>
using namespace std;

const double pi = 3.14159265;

class Cone {
    double x, y, z;
    double radius;
    double height;
public:
    Cone();
    Cone(double r, double h);
    Cone(double a, double b, double c, double r, double h);

    void setCoordinate(double a, double b, double c);
    void setRadius(double r);
    void setHeight(double h);
    double getRadius();
    double getHeight();

    double area();
    double volume();

    friend ostream& operator<<(ostream& stream, Cone obj);
};

// ����� ������ ������
ostream& operator<<(ostream& stream, Cone obj);
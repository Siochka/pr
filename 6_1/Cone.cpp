#include <iostream>
#include <cmath>
#include "Cone.h"
using namespace std;

    Cone::Cone() { x = y = z = radius = height = 0; }

    Cone::Cone(double r, double h) {
        x = y = z = 0.0;
        radius = r;
        height = h;
    }

    Cone::Cone(double a, double b, double c, double r, double h) {
        x = a;
        y = b;
        z = c;
        radius = r;
        height = h;
    }
    void Cone::setCoordinate(double a, double b, double c) { x = a; y = b; z = c; }

    void Cone::setRadius(double r) { radius = r; }

    void Cone::setHeight(double h) { height = h; }

    double Cone::getRadius() { return radius; }

    double Cone::getHeight() { return height; }

    double Cone::area() {
        double l = sqrt(height * height + radius * radius);
        return pi * radius * (radius + l);
    }

    double Cone::volume() {
        return pi * radius * radius * height / 3;
    }

    friend ostream& operator<<(ostream& stream, Cone obj);
};

ostream& operator<<(ostream& stream, Cone obj) {
    stream << "(" << obj.x << "; ";
    stream << obj.y << "; ";
    stream << obj.z << ") ";
    stream << "r=" << obj.radius << " ";
    stream << "h=" << obj.height << "\n";
}
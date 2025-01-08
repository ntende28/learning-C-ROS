#include "vector.h"
#include <iostream>
using namespace std;


// vector.cpp - method implementation
void Point::offset(double offsetX, double offsetY) {
    x += offsetX; 
    y += offsetY;
}

void Point::print() {
    cout << "(" << x << "," << y << ")";
}

void Vector::offset(double offsetX, double offsetY) {
    start.offset(offsetX, offsetY);
    end.offset(offsetX, offsetY);
}

void Vector::print() {
    start.print();
    cout << " -> ";
    end.print();
    cout << endl;
}
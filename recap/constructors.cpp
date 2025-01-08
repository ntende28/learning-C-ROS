#include <iostream>
using namespace std;


class Point {

public:
    double x, y;
    Point() {
        x = 1.0;
        y = 2.0;
        cout << "Point instance created with default constructor \n";
    }

    Point(double nx, double ny) {
        x = nx; 
        y = ny; 
        cout << "Point instance created with 2-param constructor" << endl;
    }

    Point(Point &o) {
        x = o.x; 
        y = o.y; 
        cout << "Custom constructor" << endl; 
    }
};
int main() {
    // Point q;
    Point p(2.0, 3.4); // Point instance created
    
    Point r = p;// p.x is 2.0, p.y is 3.4

    return 0;
}
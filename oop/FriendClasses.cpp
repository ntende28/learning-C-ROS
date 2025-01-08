#include <iostream>
using namespace std;

/* Friend function; A friend function is a function that is able to access the private and protected
members of a class. A class can have multiple friend functions
Note: - Friendship is not mutual meaning the class that has allowed another class to access it can't access
        the private attributes of the class
      - Friendship is not the same as inheritance

*/

class EquilateralTriangle {
private:
    float a;
    float circumference;
    float area;

public:
    void setA(float length) {
        a = length;
        circumference = 3*a;
        area = (1.73 * a * a)/4;
    }

    // creating/declaring a friend function
    // friend void printResults(EquilateralTriangle);

    // creating a friend class
    friend class Homework;
};

class Homework {
public:
    void printResults(EquilateralTriangle et) {
    cout << "The circumference is : " << et.circumference << endl;
    cout << "Area is : " << et.area << endl;
    }
};

// void printResults(EquilateralTriangle et) {
//     cout << "The circumference is : " << et.circumference << endl;
//     cout << "Area is : " << et.area << endl;
// }

int main() {

    EquilateralTriangle et;
    et.setA(5);

    Homework h;
    // invoking the friend function
    h.printResults(et);

    return 0;
}
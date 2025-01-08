#include <iostream>
using namespace std;
#include "myLib.h"


int cube(int x)
{
    return x*square(x);
}

int square(int x)
{
    return x*x;
}

int fibonacci(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } 
    else {
        return fibonacci(n-2) + fibonacci(n-1);
    }
}

double squareRoot(double num) {
    
    double low = 1.0;
    double high = num;
    
    for (int i = 0; i < 30; i = i + 1) {
        double estimate = (high + low) / 2;
        
        if (estimate*estimate > num) {
            double newHigh = estimate;
            high = newHigh;
        } else {
            double newLow = estimate;
            low = newLow;
        }
    }
    return (high + low) / 2;
}

int main() {
    int x = cube(50);
    int y = square(50);

    double z = squareRoot(625);

    cout << "The cube of 50 is " << x << endl;
    cout << "The square of 50 is " << y << endl;
    cout << "The square root of 625 is " << z << endl;

    return 0;
}
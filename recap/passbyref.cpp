#include <iostream>
using namespace std;
#include <cmath>

int divide(int numerator, int denominator, int &remainder) {
    remainder = numerator % denominator;
    return numerator / denominator;
}

double fourthRoot(double number) {
    return sqrt(sqrt(number));
}

int main() {
    int num = 14;
    int den = 4;
    int rem;
    double val = 160000;
    
    int result = divide(num, den, rem);
    double Root = fourthRoot(val);

    cout << result << "*" << den << "+" << rem << "=" << num << endl;
    // 3*4+2=12
    cout << "Obtaining the fourth root of " << val << " is " << Root << endl; 

    return 0;
}

#include <iostream>
using namespace std;


// STL - Standard Template Library
// creating a template class / function
template <typename T>
class Calculator {
public:
    T add(T a, T b){
        return a + b;
    }

    T subtract(T a, T b){
        return a - b;
    }

    T multiply(T a, T b){
        return a * b;
    }

    T divide(T a, T b){
        if (b == 0) {
            cout << "Error cannot divide by zero" << endl;
            return 0;
        }
        return a / b;
    }
};


int main() {
    // cout << addNumbers(5, 70) << endl;
    // cout << add(8.4, 3.0) << endl;
    // cout << subtract(8.4, 3.0) << endl;
    // Calculator<int> intCalculator;
    // cout << intCalculator.add(5, 9) << endl;
    // cout << intCalculator.subtract(10, 5) << endl;

    Calculator<float> floatCalc;
    cout << floatCalc.add(44.5, 13.5) << endl;
    cout << floatCalc.subtract(44.5, 13.5) << endl;
    cout << floatCalc.multiply(44.5, 13.5) << endl;
    cout << floatCalc.divide(44.5, 13.5) << endl;

    return 0;
}
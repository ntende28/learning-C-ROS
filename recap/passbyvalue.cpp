#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

int main() {
    int q = 3;
    int r = 5;
    
    swap(q, r);
    
    cout << "q " << q << endl; // q 5
    cout << "r " << r << endl; // r 3
}
#include <iostream>
using namespace std;

/* Pointer; A special variable used to store the address of another variable 
Function pointers; Similar to a normal pointer, it stores the address of a 
function */

int getNumber() {
    return 8;
}

int addNumbers(int a, int b, int c) {
    return a + b + c;
}

int main() {

    // creating a function pointer
    // int(*funcPtr)() = getNumber;
    // cout << funcPtr() <<endl;

    int(*funcPtr2)(int, int, int) = addNumbers;
    cout << funcPtr2(3, 4, 5) <<endl;
    //1:55:10

    return 0;
}
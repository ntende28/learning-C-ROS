#include <iostream>
using namespace std;

// working with dynamic arrays; new and delete key-words
/* when you create a memory dynamically  using the new keyword
ensure you delete/de-allocate the memory!! */ 
int main() {

    int size;
    cout << "Enter array size: ";
    cin >> size;

    int* myArr = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "]: ";
        cin >> myArr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        // cout << myArr[i] << " " << endl;
        cout << *(myArr+i) << "" << endl;
    }
    // deallocating memory
    delete []myArr;
    myArr = NULL;

    return 0;
}
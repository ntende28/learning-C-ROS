#include <iostream>
#include <vector>
using namespace std;

/* A practical example of using function pointers to allow for code usability
and flexibility. Using function pointers allow to imitate the working of a 
callback function, thus reducing code!!*/

bool ascendingCompare(int a, int b) {
    return a < b;
}

bool descendingCompare(int a, int b) {
    return a > b;
}

// using function pointers as an arg, passed to a function
void customSort(vector<int>& numbersVector, bool(*compareFuncPtr)(int, int)) {
    for (int startIndex = 0; startIndex < numbersVector.size(); startIndex++)
    {
        int bestIndex = startIndex;
        for (int currentIndex = startIndex + 1; currentIndex < numbersVector.size(); currentIndex++)
        {
            /* Comparison of the integers in the vector happens here */
            if (compareFuncPtr(numbersVector[currentIndex], numbersVector[bestIndex]))
                bestIndex = currentIndex;
        }
        swap(numbersVector[startIndex], numbersVector[bestIndex]);        
    }
    
}

void printNumbers(vector<int>& numbersVector) {
    for (int i = 0; i < numbersVector.size(); i++)
        cout << numbersVector[i] << endl;
}

int main() {
    vector<int>myNumbers = { 15, 0, 9, 5, 2, 1, 7, 8 };

    // creating the function pointer
    bool(*funcPtr)(int, int) = descendingCompare;

    // calling the custom sort
    customSort(myNumbers, funcPtr);
    printNumbers(myNumbers);
}
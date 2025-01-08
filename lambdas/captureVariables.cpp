#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

/* We can also “capture” variables from the calling scope. To do that we have to create a data
member in our function object and initialise it in the constructor.

Functors: - A class template F is a functor if it has a transform (or map) function defined on it.
          - A functor is a mapping between categories. Given two categories, C and D, a functor F
            maps objects in C to objects in D — it’s a function on objects.
          - Is an object of a class or struct that overloads the operator(). 
            This makes the object callable like a regular function. 
*/

struct PrinterEx {
    std::string strText;
    int numCalls;

    // Constructor
    PrinterEx(const std::string& str) : strText(str), numCalls(0) { }

    // Overloaded operator() for use in std::for_each
    void operator()(const std::string& input) {
        ++numCalls;
        std::cout << strText << ": " << input << " (Call #" << numCalls << ")" << std::endl;
    }
};

int main() {
    std::string introText = "Processing item";
    std::vector<std::string> v = {"apple", "banana", "cherry"};

    // Use std::for_each with the PrinterEx functor
    std::for_each(v.begin(), v.end(), PrinterEx(introText));

    return 0;
}

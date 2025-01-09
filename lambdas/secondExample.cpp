#include <algorithm>
#include <iostream>
#include <vector>

/* There’s a data member numCalls which is used to count the number of
invocations of the call operator. std::for_each returns the function object that we passed
it, so we can then take this object and get the data member. 

Printer printer;
printer(); // calls operator()
printer.operator()(); // similar to previous

*/

struct PrinterEx {
    PrinterEx(): numCalls(0) { }

    void operator()(int x) {
        std::cout << x << '\n';
        ++numCalls;
    }

    int numCalls;
};

int main() {

    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);

    const PrinterEx vis = std::for_each(v.begin(), v.end(), PrinterEx());
    
    std::cout << "num calls: " << vis.numCalls << '\n';

    return 0;
}
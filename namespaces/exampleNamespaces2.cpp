// exampleNamespaces2.cpp
#include <iostream>

// The using directive brings all members of a namespace into the current scope.

namespace MathOperations {
    int subtract(int a, int b) {
        return a - b;
    }

    int modulo(int a, int b) {
        return a % b;
    }
}

int main() {
    // using namespace MathOperations; // Bring MathOperations into the current scope

    // selecting only one component from the namespace
    using MathOperations::subtract;

    std::cout << "Difference: " << subtract(10, 4) << std::endl; // Outputs: Difference: 6
    // std::cout << "The modulus of 10%4 : " << modulo(10, 4) << std::endl; // Outputs: Difference: 6 - returns error

    return 0;
}

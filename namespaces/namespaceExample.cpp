// namespaceExample.cpp
#include <iostream>

/* Namespaces in C++ are a way to organize and group identifiers (such as variables, functions, and 
classes) under a unique name. They help avoid naming conflicts in larger programs or projects where 
multiple libraries or modules might use the same names for functions or variables.

why they're used? - Prevent name conflicts in larger projects
				  - Provide logical grouping of code
				  - Enhance code readability and maintainability

*/


// Define a namespace
namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }

    int multiply(int a, int b) {
        return a * b;
    }
}

// Define another namespace
namespace StringOperations {
    void printMessage(const std::string& message) {
        std::cout << "Message: " << message << std::endl;
    }
}

int main() {
    // Accessing namespace members using scope resolution operator
    int sum = MathOperations::add(5, 3);
    int product = MathOperations::multiply(4, 2);

    std::cout << "Sum: " << sum << std::endl;        // Outputs: Sum: 8
    std::cout << "Product: " << product << std::endl; // Outputs: Product: 8

    StringOperations::printMessage("Hello, Namespaces!");

    return 0;
}

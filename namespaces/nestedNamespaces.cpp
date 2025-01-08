#include <iostream>

// Namespaces can be nested to create a hierarchy

namespace Outer {
    namespace Inner {
        void display() {
            std::cout << "Inside Nested Namespace" << std::endl;
        }
    }
}

int main() {
    Outer::Inner::display(); // Accessing nested namespace members

    return 0;
}

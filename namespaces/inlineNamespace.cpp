// inlineNamespace.cpp

#include <iostream>

// An inline namespace allows members to be accessed as if they belong to the outer namespace.

namespace Library {
    inline namespace Version1 {
        void display() {
            std::cout << "Version 1 : from inline workspace" << std::endl;
        }
    }

    namespace Version2 {
        void display() {
            std::cout << "Version 2 : from normal workspace" << std::endl;
        }
    }
}

int main() {
    Library::display();       // Calls Version1::display due to `inline`
    Library::Version2::display(); // Calls Version2::display explicitly

    return 0;
}

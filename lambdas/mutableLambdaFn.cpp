/* A lamda function by default will not change capture variables from the scope
which are passed by value. However, to solve this, you can use the mutable key
word*/
#include <iostream>

int main() {
    int value = 5;

    auto modify = [value]() mutable {
        value += 10;
        std::cout << "Modified value: " << value << std::endl;
    };

    modify(); // Output: Modified value: 15
    std::cout << "Original value: " << value << std::endl; // Output: Original value: 5
    return 0;
}

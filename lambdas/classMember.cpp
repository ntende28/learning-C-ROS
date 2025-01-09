#include <iostream>

/* You cannot access a class member directly and pass it as a capture variable with a 
lambda function; error: 'this' was not captured for this lambda function.
e.g
    struct Baz {
        void foo() {
            const auto lam = [s]() { std::cout << s; };
            lam();
        }

        std::string s;
    };
instead use 'this' key word
*/

struct Baz {
    void foo() {
        const auto lam = [ this ]() { std::cout << s << std::endl; };
        lam();
    }

    std::string s;
};

int main() {
    Baz b {"this is my string"};
    b.foo();
}
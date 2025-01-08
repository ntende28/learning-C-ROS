/* General syntax of a lambda function
    [1](2) 3 -> 4 {5}
    1; Optional capture list
    2; Parameter list (optional)
    3; specifiers exception attributes
    4; optional return type
    5; code body to be executed

    Examples of a lambda function; [](float f, int a) { return a * f; };
                                   [](MyClass t) -> int { auto a = t.compute(); print(a); return a; }; - uses a trailing return type
                                   
    with additional specifiers     [x](int a, int b) mutable { ++x; return a < b; };
                                   [](float param) noexcept { return param*param; };
                                   [x](int a, int b) mutable noexcept { ++x; return a < b; };

    specifiers: mutable - can change captured variable
*/

#include <algorithm>
#include <iostream>
#include <vector>

int main() {

    struct {

        void operator()(int x) const {
            std::cout << x << '\n';
        }

    } someInstance;

    const std::vector<int> v { 1, 2, 3 };
    
    // using a functor
    // std::for_each(v.cbegin(), v.cend(), someInstance);
    
    // utilising a lambda as a callback function 
    std::for_each(v.cbegin(), v.cend(), [](int x) { std::cout << x << '\n'; });

    /* This [](int x) { std::cout << x << '\n'; } is translated in to
        struct {

            void operator()(int x) const {
                std::cout << x << '\n';
            }

        } someInstance;
    by the compiler
    */

    return 0;
}
#include <iostream>
#include <string>

auto ladd = [] (auto const a, auto const b) { return a + b; };

struct
{

    template<typename T, typename U>
    auto operator () (T const a, U const b) const { return a+b; }

} L;

int main() {

    auto i = ladd(40, 2);
    auto s = ladd("forty", "two");

    std::cout << i << std::endl;
    std::cout << s << std::endl;

    return 0;
}
#include <type_traits>

// Even when the lambda function implementation is the same, at compilation
// their code is different!!

int main() {
    
    const auto oneLam = [](int x) noexcept { return x * 2; };
    
    const auto twoLam = [](int x) noexcept { return x * 2; };
    
    static_assert(!std::is_same<decltype(oneLam), decltype(twoLam)>::value,
    "must be different!");
}
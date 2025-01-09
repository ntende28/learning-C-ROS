#include <iostream>

void bar() {
    static int static_int = 10;
    
    std::cout << static_int << '\n';
   
    auto foo = [=]() mutable noexcept{ ++static_int; };
    foo();
    std::cout << static_int << '\n';
    
    const auto increase = []() noexcept { ++static_int; };
    increase();
    std::cout << static_int << '\n';
    
    // static variables cannot be captured in lambda variables
    const auto moreIncrease = [static_int]() noexcept { ++static_int; };
    moreIncrease();
    std::cout << static_int << '\n';
}

int main() {
    bar();
    return 0;
}
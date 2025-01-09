#include <iostream>

int global = 10;

int main() {
    std::cout << global << '\n';
    
    auto foo = [=]() mutable noexcept { ++global; };
    foo(); 
    std::cout << global << '\n';
    
    const auto increaseGlobal = []() noexcept { ++global; };
    increaseGlobal();
    std::cout << global << '\n';
    
    // warning: capture of variable 'global' with non-automatic storage duration
    const auto moreIncreaseGlobal = [global]() noexcept { ++global; };
    moreIncreaseGlobal();
    
    std::cout << global << '\n';
}
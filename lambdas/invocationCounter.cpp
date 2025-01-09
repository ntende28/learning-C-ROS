#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec { 0, 5, 2, 9, 7, 6, 1, 3, 4, 8 };
    
    size_t compCounter = 0;
    
    std::sort(vec.begin(), vec.end(), [&compCounter](int a, int b) noexcept {
        ++compCounter;
        return a < b;
        }
    );

    std::cout << "number of comparisons: " << compCounter << '\n';
    
    for (const auto& v : vec)
        std::cout << v << ", ";

    std::cout << " " << std::endl;

    return 0;
}
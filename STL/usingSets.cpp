#include <iostream>
#include <set>

/*Set is a container that holds unique, sorted objects. It is a binary tree of sorted objects. They
are automatically sorted in ascending order*/

int main() {
    
    std::set<int> myset = {5, 4, 1, 2, 9, 90};

    myset.insert(12);
    myset.insert(0);

    for (auto &i : myset) {
        std::cout << i << "\n";
    }
    

    return 0;
}
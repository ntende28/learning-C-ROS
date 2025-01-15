#include <iostream>
#include <vector>
#include <algorithm>

/* The count_if function takes 3 args; a start iterator, an end iterator and a predicate. A predicate
is a function which returns a boolean value. The predicate maybe a pointer to a function or it maybe a 
lambda function which evaluates and returns a bool value. 
- The count_if function then counts the number of times the predicate evaluates to true.
*/

int main() {

    std::vector<int> myVector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 19, 25, 23, 22, 10};

    auto counteven = std::count_if(myVector.begin(), myVector.end(), [](int x){
        return x%2 == 0;
    });

    std::cout << "The number of even numbers is "<< counteven << std::endl;

    return 0;
}
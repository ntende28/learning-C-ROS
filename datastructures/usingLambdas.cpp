/*Lamdas; An unnamed function that is not going to be reused like regular functions. They are unnamed
and are written inline. They can execute fast and can allow for cleaner code
They're given by; [cc](par){defn};
    cc - capture close,
    par - parameters to be used for a function
    defn - function definition
    Lambdas - can access  all functions within its enclosing scope
            - Can only change elements passed by reference in the capture close i.e. [&d] and not [d]
*/

#include <iostream>
#include <algorithm>
#include <vector>

int main() {

    int d = 5;
    std::vector <int> numbers{1, 2, 3, 5, 6, 7, 99, 77, 55};

    // rewritting the lambda with extra conditions
    // [](int x){
    //     if (x%2 == 0)
    //         std::cout << x << " is an even number." << std::endl;
    //     else 
    //         std::cout << x << " is an odd number." << std::endl;
    // }

    // applying an inline lambda function
    // std::for_each(numbers.begin(), numbers.end(), [](int x){std::cout << x << std::endl;});
    
    std::for_each(numbers.begin(), numbers.end(), [d](int x){
        if (x%d == 0)
            std::cout << x << " is divisible by " << d << std::endl;
        else 
            std::cout << x << " is not divisible by " << d << std::endl;
        });

    return 0;
}
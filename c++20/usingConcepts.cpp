#include <iostream>
#include <concepts>

/*The concepts library provides definitions of fundamental library concepts that can be used to 
perform compile-time validation of template arguments and perform function dispatch based on 
properties of types. These concepts provide a foundation for equational reasoning in programs. */

template <typename T>
concept MustBeIncrementable = requires (T x) { x++; };

template <typename T>
concept MustBeEvenOrOdd = requires (T x) { x % 2; };

template<typename T> requires MustBeIncrementable<T> && MustBeEvenOrOdd<T>
void myfunction(T x)
{
    std::cout << "The value conforms to both conditions: " << x << '\n';
}

int main()
{
    myfunction<char>(123); // OK
    myfunction<int>(124); // OK
    myfunction<double>(345); // Error, a floating point number is not even nor odd
}
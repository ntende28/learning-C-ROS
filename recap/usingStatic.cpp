#include <iostream>

/* The static specifier says the object will have a static storage duration. The memory
space for static objects is allocated when the program starts and deallocated when
the program ends. 
*/

// void myfunction()
// {
//     static int x = 0; // defined only the first time, skipped every other
//     // time
//     x++;
//     std::cout << x << '\n';
// }

// int main()
// {
//     myfunction(); // x == 1
//     myfunction(); // x == 2
//     myfunction(); // x == 3
// }

class MyClass
{
public:
    /*Static class members are not part of the
    object. They live independently of an object of
    a class. */
    static int x; // declare a static data member
};

int MyClass::x = 123; // define a static data member

int main()
{
    MyClass::x = 456; // access a static data member
    std::cout << "Static data member value is: " << MyClass::x << std::endl;

    return 0;
}
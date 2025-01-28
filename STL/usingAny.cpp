#include <iostream>
#include <any>

/* The any container type introduced in c++17, can hold a single value of any data type. To declare it
use the #include <any> header file
To access the value of an std::any object in a safe manner, we cast it to a type of our
choice using the std::any_cast function
*/

int main()
{
    std::any a = 123;
    std::cout << "Any accessed as an integer: " << std::any_cast<int>(a) << '\n';
    
    a = 456.789;
    std::cout << "Any accessed as a double: " << std::any_cast<double>(a) << '\n';

    a = true;
    std::cout << "Any accessed as a boolean: " << std::any_cast<bool>(a) << '\n';

    // You can check if a variable of holds a value using .has_value() function.
    std::any b = 123;
    if (b.has_value())
        std::cout << "Object a contains a value." << '\n';

    std::any c{};
    if (c.has_value())
        std::cout << "Object c contains a value." << '\n';
    else
        std::cout << "Object c does not contain a value." << '\n';
}


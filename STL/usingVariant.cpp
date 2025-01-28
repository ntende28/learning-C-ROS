/*There is another type of data in C++ called union. A union is a type whose data members
of different types occupy the same memory. Only one data member can be accessed
at a time. The size of a union in memory is the size of its largest data member.

C++17 introduces a new way of working with unions using the std::variant class
template from a <variant> header. This class template offers a type-safe way of storing
and accessing a union
*/

#include <iostream>
#include <variant>

int main()
{
    std::variant<char, int, double> myvariant{ 'a' }; // variant now holds a char
    std::cout << std::get<0>(myvariant) << '\n'; // obtain a data member by index

    std::cout << std::get<char>(myvariant) << '\n'; // obtain a data member by type
    
    myvariant = 1024; // variant now holds an int
    
    std::cout << std::get<1>(myvariant) << '\n'; // by index
    std::cout << std::get<int>(myvariant) << '\n'; // by type
    
    myvariant = 123.456; // variant now holds a double
    std::cout << "Testing error handling provided by variant class" << std::endl;
    std::cout << " \n";

    std::variant<int, double> myvariant{ 123 }; // variant now holds an int
    std::cout << "Current variant: " << std::get<int>(myvariant) << '\n';
    try
    {
        std::cout << std::get<double>(myvariant) << '\n'; // exception is raised
    }
    catch (const std::bad_variant_access& ex)
    {
        std::cout << "Exception raised. Description: " << ex.what();
    }
}
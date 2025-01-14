/*Enumeration, or enum for short, is a type whose values are user-defined named
constants called enumerators. There are two types; scoped enums, unscoped enums

Unscoped enum; These unscoped enums have their enumerators leak into an outside scope, the
scope in which the enum type itself is defined e.g.
    enum MyEnum
    {
        myfirstvalue,
        mysecondvalue,
        mythirdvalue
    };

Scoped enum; To access elements in a scoped enum, use the scope resolution operator e.g
    enum class MyEnum
    {
        myfirstvalue,
        mysecondvalue,
        mythirdvalue
    };
    MyEnum my = MyEnum::myfirstvalue;
*/

#include <iostream>

enum class Days
{
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main()
{
    Days myday = Days::Monday;
    
    std::cout << "The enum value is now Monday." << '\n';

    if (myday == Days::Monday)
    {
        myday = Days::Friday;
    }
    
    std::cout << "Nobody likes Mondays. The value is now Friday." << std::endl;

    return 0;
}
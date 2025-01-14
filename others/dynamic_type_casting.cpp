/*We can directly convert a datatype to another using the static_cast<> i.e.
static_cast<type_to_convert>(value_to_convert_from).

If we want to convert from a double to int we write:
int main()
{
    auto myinteger = static_cast<int>(123.456);
}
The dynamic_cast can only convert between related classes inside the inheritance chain.
*/

#include <iostream>

class MyBaseClass {
public:
    virtual ~MyBaseClass() {}
};

class MyDerivedClass : public MyBaseClass {};

int main()
{
    MyBaseClass* base = new MyDerivedClass;
    MyDerivedClass* derived = new MyDerivedClass;
    
    // base to derived
    if (dynamic_cast<MyDerivedClass*>(base)) {
        std::cout << "OK.\n";
    }

    else {
        std::cout << "Not convertible.\n";
    }

    // derived to base
    if (dynamic_cast<MyBaseClass*>(derived)) {
        std::cout << "OK.\n";
    }

    else {
        std::cout << "Not convertible.\n";
    }

    delete base;
    delete derived;
    
    return 0;
}
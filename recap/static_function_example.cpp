#include <iostream>
#include <string>

class MyClass
{
public:
    static void mystaticfunction();
    void myfunction();
};


void MyClass::mystaticfunction()
{
    std::cout << "Hello World from a static member function." << '\n';
}

void MyClass::myfunction()
{
    std::cout << "Hello World from a regular member function." << '\n';
}


int main()
{
    /*static functions of a class can be accessed without an instance/object of the class i.e.
    the static method mystaticfunction can be accessed directly using the scope MyClass::mystaticfunction()
    . Non-static functions can only be accessed through the instance of a class using the dot notation.*/
    MyClass::mystaticfunction();
    // MyClass::myfunction();
    MyClass myobject;
    myobject.myfunction();

    return 0;
}
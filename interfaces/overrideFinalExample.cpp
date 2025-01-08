// overrideFinalExample.cpp
/* override :- Indicates that the function in the derived class is overriding 
			a virtual function in the base class.
			 - The compiler ensures that the function signature matches a base 
			class virtual function. If not, it raises a compile-time error.

   final : - Prevents further overriding of the function in any classes derived
   			 from the current class.
   		   - Once a function is marked final, no subclass can override it.

   override final : - Combines the behavior of both keywords

   when to use; - To prevent accidental overriding.
   				- To enforce a fixed implementation 
   				- For securing of a framework i.e. when protecting important functions
*/

#include <iostream>

class Base {
public:
    virtual void show() {
        std::cout << "Base::show" << std::endl;
    }
    virtual ~Base() = default;
};

class Derived : public Base {
public:
    void show() override final {  // Overrides Base::show, but prevents further overrides
        std::cout << "Derived::show" << std::endl;
    }
};

class SubDerived : public Derived {
public:
    // Uncommenting the line below will cause a compilation error
    // void show() override { std::cout << "SubDerived::show" << std::endl; }
};

int main() {
    Derived d;
    d.show();  // Outputs: Derived::show

    SubDerived sd;
    sd.show();  // Calls Derived::show (inherited behavior)
    return 0;
}

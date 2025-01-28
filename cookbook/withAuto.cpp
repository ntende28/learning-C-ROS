#include <iostream>

class foo
{
int x_;
public:
    foo(int const x = 0) :x_{ x } {}

    int& get() { return x_; }
};

decltype(auto) proxy_get(foo& f) { 
    return f.get(); 
}

int main() 
{
    auto f = foo{ 42 };
    
    // decltype(auto) x = proxy_get(f);
    
     // Use a lambda for proxy_get
    auto proxy_get = [](foo &f) -> int & { return f.get(); };
    auto &x = proxy_get(f);

    std::cout << x << std::endl;

    return 0;
}
/*
for creating type-aliases in c++, you can apply `using` keyword
using byte = unsigned char;
using pbyte = unsigned char *;
using array_t = int[10];
using fn = void(byte, double);

or the `typedef` keyword
typedef unsigned char byte;
typedef unsigned char * pbyte;
typedef int array_t[10];
typedef void(*fn)(byte, double);

template<typename T>
class foo {
    typedef T value_type;
};

typedef std::vector<int> vint_t;

*/

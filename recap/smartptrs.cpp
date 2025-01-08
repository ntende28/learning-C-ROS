#include <iostream>
#include <memory>
using namespace std;


/* A smart pointer is a wrapper for a raw pointer. They have the advantage of
deallocating memory automatically. 
Types;
    weak: Are used to observe objects in memory. It is used to locate an object in memory but the weak 
    pointer will not keep that object alive unlike the shared pointer
    unique: Cannot be shared. You can only change this by moving ownership using move
    shared: This can be shared unlike the unique pointer between multiple owners.
*/


class MyClass {
public:
    MyClass() {
        cout << "My class constructor has been invoked!" << endl;
    }

    // creating a destructor 
    ~MyClass() {
        cout << "My class destructor has been called!" << endl;
    }
};

int main() {

    // making a unique pointer
    unique_ptr<int>unPtr1 = make_unique<int>(25);
    unique_ptr<int>unPtr2 = move(unPtr1); // making unPtr2 owner of the memory being pointed by unPtr1
    
    // if (unPtr1) {
    //     cout << *unPtr2 << endl; // Dereference to access the value
    // } else {
    //     /* Once you change ownership of a unique pointer, the former pointer becomes null
    //     and trying to access it returns a NULL exception.*/
    //     cout << "unPtr1 is null" << endl;
    // }

    {
        /* illustrating the unique concept of automatic deallocation of memory.
        The unique pointer is destroyed once it is out of its scope hence no
        memory leaks!!*/ 
        // unique_ptr<MyClass>unPtr3 = make_unique<MyClass>();
    }

    // creating a shared pointer
    // shared_ptr<MyClass>shPtr1 = make_shared<MyClass>();
    // cout << "Shared count : " << shPtr1.use_count() << endl;
    // {
    //     shared_ptr<MyClass>shPtr2 = shPtr1;
    //     cout << "Shared count : " << shPtr1.use_count() << endl;
    // }
    // cout << "Shared count : " << shPtr1.use_count() << endl;

    weak_ptr<int>wekPtr;
    {
        shared_ptr<int>shPtr2 = make_shared<int>(25);
        wekPtr = shPtr2;
    }

    system("pause>nul");
    // return 0;
}
#include <iostream>
#include <memory>
using namespace std;

/* Smart ptrs; are wrappers on the raw pointers. They include ;
    - Unique; cannot be shared between two entities. But you can change 
    the ownership of the ptr. Once changed, the former will contain a nullptr
    - shared;
    -weak; similar to shared ptrs but does not increase ownership of the ptr

Smart pointers will be deleted at the end of its scope

*/

int main() {

    // unique_ptr<int>unPtr1 = make_unique<int>(30);
    // unique_ptr<int>unPtr2 = move(unPtr1); // changing ownership of the unptr1 to unptr2
    // cout << *unPtr2 << endl;

    // try
    // {
    //     if (unPtr1 != nullptr)
    //         cout << *unPtr1 << endl;
    //     throw  "Null pointer exception";
    // } 
    // catch(const char* txt)
    // {
    //     cout << "Exception occured : " << txt << endl;
    // }

    // shared_ptr<int>shPtr1 = make_shared<int>(90);
    // // can obtain the number of owners 
    // cout << "Shared count : " << shPtr1.use_count() << endl;
    // {
    //     shared_ptr<int>shPtr2 = shPtr1;
    //     cout << "Shared count : " << shPtr1.use_count() << endl;
    // }
    // cout << "Shared count : " << shPtr1.use_count() << endl;

    weak_ptr<int> weakPtr; 
    {
        shared_ptr<int>ShPtr1 = make_shared<int>(25);
        weakPtr = ShPtr1;
    }

    cin.get();
}
#include <iostream>
#include <vector>
using namespace std;

/* static arrays; - store in a continous memory
           - All elements should have the same data type
           - Elements can be easily accessed quickly
           - Limitations; The size of array is allocated at runtime and it must be specified
           in the declaration.

Dynamic arrays; - Can resize themselves according to the circumstance i.e. during running of program
                - Doesn't waste memory b'se it can adjust its size 
                - However, every time the size is changed it runs extra tasks i.e. allocate new space, copy
                all elements from old array, and delete old array

STL Vector; - Works like a dynamic array except with less work
            - Vector elements are stored in a contiguous memory
            - It will automatically resize itself once an element is added/deleted
*/

int main() {
    // creating a vector
    vector<int> numbers;
    // insert an el
    // numbers.push_back(0);

    for (int i = 1; i <= 10; i++)
    {
        numbers.push_back(i);
    }

    // // quick way of printing elements of a vector
    // for(int number : numbers)
    //     cout << number << endl;
    
    // // using iterators; cbegin() and cend() are constant iterators
    // for(auto it = numbers.begin(); it != numbers.end(); it++) {
    //     *it = 5;
    //     cout << *it << endl; // print value of element in iteration
        // cout << &it << endl; // print address of iterator
        // cout << &(*it) << endl; // print address of individual element in iteration
    // } 

    // auto it = numbers.begin();
    // accessing the element in the 5th position from starting pt in vector
    // cout << *(it + 5) << endl;

    // other functions in vectors
    // cout << "Size : " << numbers.size() << endl;
    // cout << "Max size : " << numbers.max_size() << endl;
    // cout << "Capacity : " << numbers.capacity() << endl;
    // numbers.resize(5);
    // cout << "Size : " << numbers.size() << endl;
    // if (numbers.empty())
    //     cout << "Vector is empty\n ";
    // else
    //     cout << "Vector is not empty \n";
    // cout << "Element[0] is : " << numbers[0] << endl;
    // cout << "Element at(0) : " << numbers.at(0) << endl;
    // cout << "Front : " << numbers.front() << endl;
    // cout << "Back : " << numbers.back() << endl;
    // numbers.clear();
    // cout << "Size : " << numbers.size() << endl;

    // inserting an element at a specific point in the vector
    numbers.insert(numbers.begin() + 5, 88);

    // remove at a specific position
    numbers.erase(numbers.begin() + 5);
    
    // removing last elemnt
    numbers.pop_back();

    for(int number : numbers)
        cout << number << endl;

    return 0;
}
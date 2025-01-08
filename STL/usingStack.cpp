#include <iostream>
#include <stack>
using namespace std;

/* Stack; - A datastructure that uses a LIFO (Last In, First Out) / FILO (First In, Last Out) 
            technique to store elements.

*/

void printStackElements(stack<int> stack) {
    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }
    
}

int main() {

    // key functions for stack; empty, size, push, pop, top
    stack<int> numberStack;

    // numberStack.push(1);

    // adds elements to the top of the stack
    for (int i = 0; i <= 5; i++)
        numberStack.push(i);
    
    // removes elements from the top of the stack
    numberStack.pop();
    printStackElements(numberStack);

    // if (numberStack.empty())
    //     cout << "Stack is empty \n";
    // else
    //     cout << "Stack is not empty" << endl; 

    // cout << "Stack size is " << numberStack.size() << "\n";
    
    return 0;
}
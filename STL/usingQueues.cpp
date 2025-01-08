#include <iostream>
#include <queue>
using namespace std;

/*Queues: - Is a FIFO (First In, First Out) / FCFS (First Come First Serve) datastructure

*/

void printQueue(queue<int> queue) {
    while (!queue.empty())
    {
        cout << queue.front() << " ";
        queue.pop();
    }
    cout << endl;
}

int main() {
    queue<int> myQueue;
    
    for(int i = 0; i <= 5; i++)
        myQueue.push(i);

    cout << "Size is " << myQueue.size() << endl;
    cout << "First element is " << myQueue.front() << endl;
    cout << "Last element is " << myQueue.back() << endl;

    cout << "Queue : \n";

    printQueue(myQueue);

    return 0;
}
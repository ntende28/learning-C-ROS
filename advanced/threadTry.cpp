#include <iostream>
#include <thread>

void printThread(int x) {
    std::cout << "Hello from my thread" << std::endl;
    std::cout << "Argument passed in : " << x << std::endl;
}


int main() {

    // creating a thread
    std::thread myThread(&printThread, 100);
    /* to solve error of termination without active exception, make the main function
    to wait for the thread to execute and then actually execute. Synchronization!!
    */
    myThread.join();

    std::cout << "Hello from the main thread!" << std::endl;

    return 0;
}

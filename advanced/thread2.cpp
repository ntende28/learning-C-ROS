#include <iostream>
#include <thread>

int main() {

    auto lambda=[](int x) {
        std::cout << "Hello from my thread" << std::endl;
        std::cout << "Argument passed in : " << x << std::endl;
    };

    // creating a thread
    std::thread myThread(lambda, 100);
    /* to solve error of termination without active exception, make the main function
    to wait for the thread to execute and then actually execute. Synchronization!!
    */
    myThread.join();

    std::cout << "Hello from the main thread!" << std::endl;

    return 0;
}

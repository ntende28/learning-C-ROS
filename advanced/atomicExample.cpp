#include <iostream>
#include <thread>
#include <vector>
#include <atomic>
// #include<mutex>

// std::mutex gLock;
static std::atomic<int> shared_value = 0;

void shared_value_increment() {
    // std::lock_guard<std::mutex> guard(gLock); // Use RAII for thread-safe lock and unlock
    // gLock.lock();
    shared_value++;
    // shared_value += 1;
    // gLock.unlock();
}

int main() {

    std::vector<std::thread> threads; // creating a vector to store the threads
    for (int i = 0; i < 100; i++)
    {
        threads.push_back(std::thread(shared_value_increment));
    }

    // Join all threads
    for (auto &th : threads) {
        th.join();
    }
    
    std::cout << "Shared value : " << shared_value << std::endl;

    return 0;
}

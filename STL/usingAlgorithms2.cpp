#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Create a vector called numbers that will store integers
    vector<int> numbers = {1, 7, 3, 5, 9, 2};

    // Search for the number 3
    //   auto it = find(numbers.begin(), numbers.end(), 3);

    //   // Check if the number 3 was found
    //   if (it != numbers.end()) {
    //     cout << "The number 3 was found!" << "\n";
    //   } else {
    //     cout << "The number 3 was not found." << "\n";
    //   }

    // Sort the vector in ascending order
    // sort(numbers.begin(), numbers.end());
    
    // Find the first value greater than 5 in the sorted vector
    // auto it = upper_bound(numbers.begin(), numbers.end(), 5);

    // Find the smallest number
    // auto it = min_element(numbers.begin(), numbers.end());
    
    // Find the largest number
    // auto it = max_element(numbers.begin(), numbers.end());
    
    
    // Create a vector called copiedNumbers that should store 6 integers
    // vector<int> copiedNumbers(6);

    // Copy elements from numbers to copiedNumbers
    // copy(numbers.begin(), numbers.end(), copiedNumbers.begin());
    
    // Create a vector called numbers that will store 6 integers
    vector<int> newNumbers(6);

    // Fill all elements in the numbers vector with the value 35
    fill(newNumbers.begin(), newNumbers.end(), 35);


    for (int num : newNumbers) {
        cout << num << "\n";
    }

    // cout << *it << endl;
    
    return 0;
}
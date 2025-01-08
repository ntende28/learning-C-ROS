#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  // Create a vector called numbers that will store integers
  vector<int> numbers = {1, 7, 3, 5, 9, 2};

  // Sort numbers numerically
//   sort(numbers.begin(), numbers.end());
  
  // Sort numbers numerically in reverse order
  sort(numbers.rbegin(), numbers.rend());

  // Print numbers
  for (int num : numbers) {
    cout << num << "\n";
  }
  
  return 0;
}

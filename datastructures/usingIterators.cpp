#include <iostream>
#include <vector>
using namespace std;

int main() {
  // Create a vector called cars that will store strings
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  // Create an iterator named it
  vector<string>::iterator it;

  // Use the iterator to loop through the vector
  for (it = cars.begin(); it != cars.end(); ++it) {
    cout << *it << "\n";
  }

  return 0;
}

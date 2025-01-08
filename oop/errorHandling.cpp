#include <iostream>
using namespace std;

int main() {
  try {
    int age = 17;
    if (age >= 18) {
      cout << "Access granted - you are old enough." << endl;
    } else {
      throw (age);
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum << endl;  
  }
  cin.get();
}

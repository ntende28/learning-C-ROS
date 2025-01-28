#include <iostream>

using namespace std;

/*Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm
divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The
algorithm repeats this, until n is one*/

// you can shorten some definitions using typedef
typedef long long ll;

int main() {
    ll n;
    cout << "Enter a positive number : ";
    cin >> n;
    
    while (true) {
        cout << n << " ";
        if (n == 1) 
            break;
        if (n%2 == 0) 
            n /= 2;
        else n = n*3+1;
    }
    
    cout << "\n";
}
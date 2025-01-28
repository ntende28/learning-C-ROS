#include <iostream>
#include <vector>

using namespace std;

// shortening using macros
#define F first
#define S first
#define PB push_back
#define M make_pair

// shortening using typedef
typedef vector<pair<int, int>> vi;
typedef pair<int, int> pi;

int main() {
    int x1 = 0; int y1 = 2;
    int x2 = 1; int y2 = 3;

    vi myNumbers;
    // myNumbers.push_back(make_pair(y1, x2));
    // myNumbers.push_back(make_pair(y2, x2));

    // using macros and typedef to reduce statements
    myNumbers.PB(M(x1, y1));
    myNumbers.PB(M(x2, y2));
    
    for(auto i: myNumbers)
        cout << i.first << " " << i.second << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

/* Put the specific handlers first, then put the default exception last
to handle any unexpected error.*/

class Printer {
    string _name;
    int _availablePaper;

public:
    Printer(string name, int paper);
    void Print(string txtDoc);
};

Printer::Printer(string name, int paper) : _name(name), _availablePaper(paper) {}

void Printer::Print(string txtDoc) {
    int requiredPaper = txtDoc.length() / 10;

    if (requiredPaper > _availablePaper)
        throw "No paper available";
    
    cout << "Printing ..." << txtDoc << endl;
    _availablePaper -= requiredPaper;
}

int main() {

    Printer myPrinter("HP Deskjet 12344", 5);
    try
    {
        for (int i = 0; i < 5; i++)
            myPrinter.Print("Hello, the printer is working");    
    }
    // catch(const char* txtException) {
    //     cout << "Exception : " << txtException << endl;
    // }
    // catch(int exCode) {
    //     cout << "Exception : " << exCode << ". Check documentation" << endl;
    // }
    catch (...) { // the default exception 
        cout << "Exception happened! " << endl;
    }
    
    cin.get();
}
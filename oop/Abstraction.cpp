#include <iostream>
using namespace std;

class SmartPhone {
public: 
    virtual void TakeASelfie() = 0; 
    virtual void MakeACall() = 0;
};

class Android : public SmartPhone {
    void TakeASelfie() {
        cout << "Android is taking a selfie." << endl;
    }

    void MakeACall() {
        cout << "Android is making a call." << endl;
    }
};

class Iphone : public SmartPhone {
    void TakeASelfie() {
        cout << "Iphone is taking a selfie." << endl;
    }

    void MakeACall() {
        cout << "Iphone is making a call." << endl;
    }
};

int main() {

    SmartPhone* s1 = new Android();
    SmartPhone* s2 = new Iphone();

    s1->TakeASelfie();
    s2->MakeACall();

    return 0;
}
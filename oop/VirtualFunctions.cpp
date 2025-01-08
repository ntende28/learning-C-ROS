#include <iostream>
using namespace std;

/* Virtual functions; Is a function defined in a base class and is redefined/implemented in a 
    base class
    - Adding keyword virtual on method in base class allows for a pointer in the base class to 
    derived class to use the most derived form of the same function, i.e. if function exists in 
    derived class, it will be implemented otherwise the one in base class will be used.
    - equating a virtual function declaration to zero makes it a pure virtual function
    - Abstract class; a class with atleast one pure virtual functionk 
    - Abstract classes cannot have instances but rather pointers
*/


class Instrument {
public: 
    virtual void playSound() = 0; // a pure virtual function
    // virtual void playSound() {
    //     cout << "Instrument is playing....\n" << endl;
    // }
};

class Accordion : public Instrument {
public:
    void playSound() {
        cout << "Accordion is playing ..\n" << endl;
    }
};

class Piano: public Instrument {
    void playSound() {
        cout << "Piano is playing ..\n" << endl;
    }
};


int main() {

    Instrument* ins1 = new Accordion();
    Instrument* ins2 = new Piano();

    Instrument* instruments[2] = {ins1, ins2};
    for (int i = 0; i < 2; i++)
        instruments[i]->playSound();
    
    return 0;
}
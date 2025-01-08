#include <iostream>
using namespace std;

class Monster {
public: 
    virtual void attack() = 0;
};

class Vampire : public Monster{
public:
    void attack() {
        cout << "Sucking blood from victim!!" << endl;
    }
};

class Zombie : public Monster{
public: 
    void attack() {
        cout << "Swallowing victim whole!" << endl;
    }
};

class Dragon : public Monster{
public:
    void attack() {
        cout << "Firing dragon balls! " << endl;
    }
};

int main() {

    Monster* monsters[3];
    monsters[0] = new Vampire();
    monsters[1] = new Zombie();
    monsters[2] = new Dragon();

    for(int i=0; i <= 2; i++)
        monsters[i]->attack();

    for(int i=0; i <= 2; i++)
        delete monsters[i];
    cin.get();
}
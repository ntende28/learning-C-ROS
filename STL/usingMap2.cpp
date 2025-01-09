#include <iostream>
#include <list>
#include <map>
#include <string>

using namespace std;

// Illustrating a map with a string(key) and a list of values

int main() {

    // creating the map
    map<string, list<string>> pokedex;

    // creating the list of strings
    list<string> pikachuaAttacks {"thunder shock", "tail whip", "quick attack"};
    list<string> charmanderAttacks {"flame thrower", "scary face"};
    list<string> chikoritaAttacks {"razor leaf", "poison powder"};

    // adding the keys and values to the dictionary
    pokedex.insert(pair<string, list<string>>("Pikachu", pikachuaAttacks));
    pokedex.insert(pair<string, list<string>>("Charmander", charmanderAttacks));
    pokedex.insert(pair<string, list<string>>("Chikorita", chikoritaAttacks));

    // displaying the dictionaries
    for (auto pair : pokedex) {
        cout << pair.first << " - ";
        // iterating through the list
        for (auto attack : pair.second)
            cout << attack << ", ";
        cout << endl;
    }

    return 0;
}
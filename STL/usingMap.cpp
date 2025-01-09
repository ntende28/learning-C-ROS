#include <iostream>
#include <map>
// #include <unordered_map>
#include <string>
using namespace std;


/*Map : - A unique type of datastructure that stores data in key-value pairs, similar
        to dictionaries in python. It could be between two simple data types e.g. int and string
        or int and a complex datatype like a list. 
        - The key is always a simple datatype like int, string and the value maybe simple
        or complex  
        - Orders key elements in ascending order / alphabetically automatically      
        - keys must be unique, values do not need to be unique
Unordered map : - Can be used when you don't want to have your map automatically ordered
*/
 
 int main() {

    // creating our dictionary/map
    map<string, string> myDictionary;
    // unordered_map<string, string> myDictionary; // using an unordered map

    myDictionary.insert(pair<string, string>("orange", "die Orange, die Apfelsine"));
    myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));
    myDictionary.insert(pair<string, string>("apple", "der Apfel"));
    myDictionary.insert(pair<string, string>("banana", "die Banane"));
    
    // accessing and changing an element
    myDictionary["strawberry"] = "Die Erdbeere";

    //deleting all elements
    myDictionary.clear();    

    // obtaining size of dictionary
    cout << myDictionary.size() << endl;

    // displaying the elements
    for (auto pair : myDictionary) 
        cout << pair.first << " - " << pair.second << endl;
    

    return 0;
 }
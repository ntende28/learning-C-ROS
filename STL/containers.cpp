#include <iostream>
#include <list>
using namespace std;


/*Container; A box you use to store and organize different items 
To access the elements in a list, you make use of iterators (a pointer to an 
element in the list) to visit each element in the list
passing by value; function needs to create its own copy of the variable, hence 
takes some time
passing by reference; function works on the actual original element itself hence 
it is fast

    List: - adding & deleting objects in lists is very fast
          - traversing /search operations on lists are very slow 

    Vector: - very fast for searching elements
            - very slow for adding elements and removing because each time you have to
            reallocate a new size of vector/container
*/

// when function is meant not to change el, use const iterator
void displayRatings(const list<int>& playersRating) { // passing by reference, &
    for (list<int>::const_iterator it = playersRating.begin(); it!=playersRating.end(); it++) {
        cout << "Player rating: " << *it << endl;
    }
}

/* ordering rating by size, for this case the function is meant to change the 
the original list hence u can use a normal iterator
*/
void insertPlayerIntoOrderedList(int newPlayerRating, list<int>& playersByRating) {
    for (list<int>::iterator it = playersByRating.begin(); it!=playersByRating.end(); it++) {
        if (*it > newPlayerRating)
        {
            playersByRating.insert(it, newPlayerRating);
            return;
        }
    } 
    playersByRating.push_back(newPlayerRating);   // put at the end 
}

int main() {

    // list<int> myList;
    // myList.push_back(10);
    // myList.push_back(20);
    // myList.push_front(30);

    // // erase an element
    // myList.erase(myList.begin());

    // for (list<int>::iterator it = myList.begin(); it!=myList.end(); it++) 
    //     cout << *it << endl;
    
    // a simple ranking application
    list<int> allPlayers = {2, 5, 3, 1, 6, 7, 10, 3, 9, 5, 7, 8, 4, 4, 3, 10, 8};
    
    list<int> beginners; // rating 1 -5
    list<int> pros; // rating 6 - 10

    //creating a ranking system to separate beginners from pros 
    for (list<int>::iterator it = allPlayers.begin(); it!=allPlayers.end(); it++) {
        int rating = *it;
        if (rating >= 1 && rating <= 5)
            insertPlayerIntoOrderedList(rating, beginners);
        else if (rating >= 6 && rating <= 10)
            insertPlayerIntoOrderedList(rating, pros);
    } 

    cout << "Beginners :" << endl;
    displayRatings(beginners);
    cout << "  " << endl;
    cout << "Pros : " << endl;
    displayRatings(pros);

    return 0;
}
#include<iostream>
using namespace std;

/*Copy constructors; These are used to create objects based on an already existing object
i.e. Book book2(book1); or Book book2 = book1.
    - It is used when passing an object by value to a function
    - Also used when you are returning an object by value from a function
*/

class Book {
public:
	string Title;
	string Author;
	float* Rates;
	int RatesCounter;

	Book(string title, string author) {
		Title = title;
		Author = author;

		RatesCounter = 2;
		Rates = new float[RatesCounter];
		Rates[0] = 5;
		Rates[1] = 4;
	}

	~Book() {
		delete[] Rates;
		Rates = nullptr;
	}

    // creating a copy constructor
    Book(const Book& original) {
        Title = original.Title;
        Author = original.Author;
        RatesCounter = original.RatesCounter;

        Rates = new float[RatesCounter];
        for (int i = 0; i < RatesCounter; i++)
            Rates[i] = original.Rates[i]; // copying elements in original arr to the copied
    }
};

void printBook(Book book) {
    cout << book.Author << endl;
    cout << book.Title << endl;

    float sum = 0;
    for (int i = 0; i < book.RatesCounter; i++)
        sum += book.Rates[i];

    cout << "Average rate : " << sum / book.RatesCounter << endl;
    
}

int main() {

	Book book1("Millionaire Fastlane", "M.J. DeMarco");
	Book book2("C++ Lambda Story", "Bartek F.");
    
    // Book book3(book1); // invoking a copy constructor
    Book book4 = book2; // invoking a copy constructor
    
    printBook(book1);
    printBook(book2);
    printBook(book4);

	cin.get();
}
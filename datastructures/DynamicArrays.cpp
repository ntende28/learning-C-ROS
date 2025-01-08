#include <iostream>
using namespace std;

class Student {
public:
    string Name;
    int Age;
    char Gender;
    float Grade;

    Student() {}

    Student(string name, int age, char gender, float grade) {
        Name = name;
        Age = age;
        Gender = gender;
        Grade = grade;
    }
};

void printStudents(Student* students, int size) {
    for (int i = 0; i < size; i++)
    {
        cout << "STUDENT " << i+1 << "\t";
        cout << students[i].Name << "\t";
        cout << students[i].Age << "\t";
        cout << students[i].Gender << "\t";
        cout << students[i].Grade << "\n";
    }
    
}

void populateStudents(Student* students, int start, int size) {
    // initializing direct from user input
    for (int i = start; i < size; i++)
    {
        cout << "STUDENT " << i + 1 << endl;

        Student s;
        cout << "Name : ";
        cin >> s.Name;
        cout << "Age : ";
        cin >> s.Age;
        cout << "Gender : ";
        cin >> s.Gender;
        cout << "Course grade : ";
        cin >> s.Grade;

        cout << "  \n"; 
        students[i] = s;
    }
}

void printStudents(Student* students, int size, char gender) {
    for (int i = 0; i < size; i++)
    {
        if (students[i].Gender == gender) {
            cout << "STUDENT " << i+1 << "\t";
            cout << students[i].Name << "\t";
            cout << students[i].Age << "\t";
            cout << students[i].Gender << "\t";
            cout << students[i].Grade << "\n";
        }
            
    }
}
/*  working with dynamic arrays of objects, size is determined at runtime
*/

int main() {
    
    int size;
    cout << "Enter number of students : ";
    cin >> size;

    // to create a dynamic array, make use of pointers, array is created in dynamic memory
    Student* students = new Student[size];
    populateStudents(students, 0, size);

    char choice;
    cout << "Do you want a bigger array?";
    cin >> choice;
    if (choice == 'n' || choice == 'N') {
        delete [] students;
        return 0;
    }

    // resizing array to fit new size
    int newSize;
    cout << "Enter new number of students: ";
    cin >> newSize;

    // 1. allocate new students array
    Student* newStudents =  new Student[newSize];
    
    // 2. copy elements in old array into new array
    // memcpy(newStudents, students, sizeof(Student) * size); // used for primitive datatypes

    // deepcopy
    for (int i = 0; i < size; i++)
        newStudents[i] = students[i];
    
    // 3/ delete the old array
    delete [] students;
    
    // 4. make new array to point to same address 
    students = newStudents;

    populateStudents(students, size, newSize);

    printStudents(students, newSize);

    //filter females and males
    cout << "\n Male Students \n";
    printStudents(students, newSize, 'm'); // males

    cout << "\n Female Students \n";
    printStudents(students, newSize, 'f'); // females

    // delete students; // mistake only deleting a pointer
    delete [] students; //do this instead
    return 0;
}
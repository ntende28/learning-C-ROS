#include <iostream>
#include <string>
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

int main() {

    // initializing an array of objects
    Student students[3] = {
        {"First", 30, 'M', 7.0},
        {"Second", 24, 'F', 6.5},
        {"Third", 22, 'F', 5}
    };

    // Student students[3];
    // initializing direct from user input
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << "STUDENT " << i + 1 << endl;

    //     Student s;
    //     cout << "Name : ";
    //     cin >> s.Name;
    //     cout << "Age : ";
    //     cin >> s.Age;
    //     cout << "Gender : ";
    //     cin >> s.Gender;
    //     cout << "Course grade : ";
    //     cin >> s.Grade;

    //     cout << "  "; 
    //     students[i] = s;
    // }

    float sumOfGrades = 0;
    for (int i = 0; i < 3; i++)
        sumOfGrades += students[i].Grade;
    
    cout << "The average grade is " << sumOfGrades / 3 << endl;
    
    return 0;
}
#include<iostream>
using namespace std;

class Student {
public:
    string Name;
    int Age;
    char Gender;
    
    virtual void study() = 0;
};

class ProgrammingStudent : public Student {
public:
    void study() {
        cout << "Learning how to code!!" << endl;
    }
};

class ArtsStudent : public Student {
public:
    void study() {
        cout << "Received a class on arts history" << endl;
    }
};

class MusicStudent : public Student {
public:
    void study() {
        cout << "Received a class on the Piano and the ukelele" << endl;
    }
};


int main() {

    Student* students[3]; // an array of ptrs to students
    students[0] = new ProgrammingStudent();
    students[1] = new ArtsStudent();
    students[2] = new MusicStudent();

    for (int i = 0; i < 3; i++)
        students[i]->study();
        
    for (int i = 0; i < 3; i++)
        delete students[i]; // deleting/deallocation memory for arrays of objects

    cin.get();
}
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
    void study();
};

class ArtsStudent : public Student {
public:
    void study();
};

class MusicStudent : public Student {
public:
    void study();
};
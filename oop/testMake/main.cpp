// main.cpp
#include "AdvPolymorphism.h"

int main() {

    Student* students[3]; // an array of ptrs to students
    students[0] = new ProgrammingStudent();
    students[1] = new ArtsStudent();
    students[2] = new MusicStudent();

    for (int i = 0; i < 3; i++)
        students[i]->study();
        
    for (int i = 0; i < 3; i++) {
        delete students[i]; // deleting/deallocation memory for arrays of objects
    	students[i] = nullptr;  // Prevent dangling pointer
	}
	
    return 0;
}

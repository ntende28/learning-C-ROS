#include <iostream>
using namespace std;

// introducing the concept of abstraction/interfaces
class AbstractEmployee{
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee{
private:
    
    string Company;
    int Age;

protected:
    string Name;

public:    
    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    // setters
    void setName(string name) { Name = name; }
    void setCompany(string company) { Company = company; }
    void setAge(int age) { Age = age; }
    
    // getters
    string getName() { return Name; }
    string getCompany() { return Company; }
    int getAge() { return Age; }

    void IntroduceSelf(){
        cout << "Name : " << Name << endl;
        cout << "Company : " << Company << endl;
        cout << "Age : " << Age << endl;
    }

    void AskForPromotion() {
        if (Age > 30)
            cout <<Name<<" has been promoted!"<<endl;
        else
            cout <<Name<<" is not eligible for promotion!"<<endl;
    }

    /* A virtual function tells the compiler to check the derived
    class for the implementation of the same function in the parent class,
    and if it exists run that function instead!
    */
    virtual void Work(){
        cout << Name <<" is checking emails, trends and clearing backlog" <<endl;
    }
};

// derived class
class Developer: public Employee{
public:
    string FavLanguage;

    Developer(string name, string company, int age, string lang)
        :Employee(name, company, age) {
            FavLanguage = lang;
    }

    void FixBug() {
        cout << Name << " is fixing a bug with "<< FavLanguage << endl;
    }

    void Work() {
        cout << Name << "'s work is writing code in " << FavLanguage <<endl;
    }
};

// derived class
class Teacher: public Employee{
private:
    string Subject;

public:
    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age) {
            Subject = subject;
        }

    void PrepareLesson(){
        cout << Name << " is preparing a lesson on "<< Subject <<endl;
    }

        void Work(){
        cout << Name <<"'s work is teaching new concepts on "<< Subject <<endl;
    }
};

int main() {
    Employee emp = Employee("Ken", "MoveR", 28);

    // int userAge = emp.getAge();
    // emp.setAge(31);
    // cout <<emp.getName()<< " has "<<emp.getAge()<< " years old."<< endl;
    // emp.AskForPromotion();

    Developer dev = Developer("Ken", "M", 28, "Python, C++");
    // dev.Work();
    // dev.AskForPromotion();
    // dev.FixBug();

    Teacher brian = Teacher("Brian", "St. Johns", 33, "Geography");
    // brian.PrepareLesson();
    // brian.Work();
    // brian.AskForPromotion();

    Employee *d = &dev;
    Employee *b = &brian;
    d->Work();
    b->Work();
    return 0;
}
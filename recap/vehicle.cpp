#include <iostream>
using namespace std;
#include <cstring>


class Vehicle {
protected:  
    string license;
    int year;

public:
    Vehicle ( const string & myLicense , const int myYear )
        : license (myLicense) , year (myYear) {}
    
    const string getDesc () const{
        return license + " from " + to_string(year) ;
    }
    
    const string & getLicense() const { return license; }
    const int getYear() const { return year; }
};

// car class will inherit from vehicle class
class Car : public Vehicle {
    string style;

public:
    Car(const string & myLicense, const int myYear, const string &myStyle)
        : Vehicle(myLicense, myYear), style(myStyle) {}
    const string  &getStyle() { return style; } 

};
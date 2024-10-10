#include<iostream>
using namespace std;

//Constructors
/*
    A constructor in C++ is a special method
    that is automatically called when an object of a class is created.
    To create a constructor, use the same name as the class, followed by parentheses ():
*/

class Student{
public:
    Student(){
        cout << "Constructors Class"; // Automatically called
    }
};


class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) { // Constructor with parameters
        brand = x;
        model = y;
        year = z;
    }
};



int main(){

    Student myObj;
    Car car_obj("\nBmw\n","x2\n",1920);
    cout<<car_obj.brand;
    cout<<car_obj.model;
    cout<<car_obj.year;
    return 0;
}

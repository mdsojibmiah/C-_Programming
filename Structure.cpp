#include<iostream>
using namespace std;

int main(){

    struct{ // Structure declaration
        string myname;// Member (string variable)
        int age;// Member (int variable)
    }myStructure; // Structure variable

    //To access members of a structure, use the dot syntax (.):

    myStructure.myname ="Error";
    myStructure.age = 23;

    cout << myStructure.myname << "\n";
    cout << myStructure.age <<  "\n";


    // One Structure in Multiple Variables
    // You can use a comma (,) to use one structure in many variables:

    struct{
        string brand;
        string carName;
        int year;
    }myCar1,myCar2;

    myCar1.brand = "BMW";
    myCar1.carName = "x5";
    myCar1.year = 1999;

    myCar2.brand = "Ford";
    myCar2.carName="Mustang";
    myCar2.year = 1994;


    cout << myCar1.brand << " " << myCar1.carName << " " << myCar1.year << " \n";
    cout << myCar2.brand << " " << myCar2.carName << " " << myCar2.year << " \n";





    return 0;
}


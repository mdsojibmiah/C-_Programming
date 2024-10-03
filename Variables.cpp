#include<iostream>
using namespace std;

int main(){

    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean (true or false)

    cout <<"Integer Number = " << myNum << endl;
    cout <<"Floating Number = " << myFloatNum << endl ;
    cout <<"My Letter = " << myLetter << endl;
    cout <<"MY text = " << myText << endl;
    cout <<"My Boolean = "<< myBoolean << endl;

    // Declare Many Variables
    int x=10,y=20,z=30;
    cout << "Result =  " << x+y+z << endl;

    // Constant variable it must be assigned value
    const int marked = 20;
    cout << "Constant Variable = " << marked << "\n";


    return 0;
}

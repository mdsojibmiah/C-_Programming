#include<iostream>
using namespace std;

int main(){

    int doorCode = 1337;

    if (doorCode == 1337) {
      cout << "Correct code.\nThe door is now open.\n";
    } else {
      cout << "Wrong code.\nThe door remains closed.\n";
    }

    int myNum = 10; // Is this a positive or negative number?

    if (myNum > 0) {
      cout << "The value is a positive number.\n";
    } else if (myNum < 0) {
      cout << "The value is a negative number.\n";
    } else {
      cout << "The value is 0.\n";
    }

    if (myNum % 2 == 0) {
      cout << myNum << " is even.\n";
    } else {
      cout << myNum << " is odd.\n";
    }

    int num = 21;
    //variable = (condition) ? expressionTrue : expressionFalse;
    string error =(21==num)? "Number is Error" : "Wrong Number";
    cout << error;
    return 0;
}

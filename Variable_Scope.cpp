#include<iostream>
using namespace std;

//A local variable cannot be used outside the function it belongs to.
void name(){
 string nickname = "Error"; // Local variable
 cout << nickname << "\n";
}
int value =21;
void myFunction(){
cout << "Global Scope = " << value << "\n";
}

// Naming Variables
//If you operate with the same variable name inside and outside of a function
int number = 10;

void myNum(){
    int number = 20;
    cout << number << "\n";
}

int main(){

    name();
    myFunction();
    // Local variable is not used other function
    // cout << nickname;

    cout << "Again Global variable used  = ";
    cout << value << "\n";

    // Same variable name
    myNum();

    cout << number << "\n";

    return 0;
}

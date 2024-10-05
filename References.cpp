#include<iostream>
using namespace std;

int main(){

    /* A reference variable is a "reference" to an existing variable,
    and it is created with the & operator:*/

    string name = "Error";
    string &nick =name;
    cout << name << "\n";
    cout << nick << "\n";

    //Memory Address
    //To access it, use the & operator, and the result will represent where the variable is stored:
    cout << &name << "\n";
    cout << &nick << "\n";

    return 0;
}

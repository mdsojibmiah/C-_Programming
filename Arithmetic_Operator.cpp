#include<iostream>
using namespace std;

int main(){

    int x=20, y=10;
    int addition, subtraction, multiplication, division, Modulus, increment, decrement;

    addition = x+y;
    subtraction = x-y;
    multiplication = x*y;
    division = x/y;
    Modulus = x%y;
    increment = ++x;
    decrement = --y;

    cout << "Addition = "<< addition << "\n";
    cout << "Subtraction = "<< subtraction << "\n";
    cout << "Multiplication = "<< multiplication << "\n";
    cout << "Division = "<< division << "\n";
    cout << "Modulus = "<< Modulus << "\n";
    cout << "Increment = "<< increment << "\n";
    cout << "Decrenment = "<< decrement << "\n";

    return 0;
}




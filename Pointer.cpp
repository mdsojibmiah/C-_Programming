#include<iostream>
using namespace std;

int main(){

    string food = "Pizza"; // A food variable of type string

    cout << food << "\n";  // Outputs the value of food (Pizza)
    cout << &food << "\n"; // Outputs the memory address of food (0x6dfed4)

    //is created with the * operator.

    string food1 = "Pizza";  // A food variable of type string
    string* ptr = &food1;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food1 << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food1 << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";


    int a =10,b=20;
    int* ptr1 = &a;
    int* ptr2 = &b;
    int sum = a+b;
    cout << ptr1 << "\n";
    cout << &a << "\n";
    cout << sum;


    return  0;
}

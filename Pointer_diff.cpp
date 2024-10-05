#include<iostream>
using namespace std;

int main(){

    // Get Memory Address and Value
    string Code = "C++"; // Variable declaration
    string* ptr = &Code; // Pointer declaration

    // Reference: Output the memory address of C++ with the pointer (0x6dfed4)
    cout << ptr << "\n";

    //// Dereference: Output the value of Code with the pointer (C++)
    cout << *ptr << "\n";

    // Modify the Pointer Value

    string man = "smile";
    string* ptr1 = &man;

    cout << &man << "\n";

    cout << ptr1 << "\n";// Man - memory address

    cout << *ptr1 << "\n";// smile

    // Change value

    *ptr1 = "Sad";

    cout << man << "\n";//sad

    cout << &man << "\n";




    return 0;
}

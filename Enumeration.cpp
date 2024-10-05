#include<iostream>
using namespace std;

// Enumeration
enum level{ // first value start =0;
    zero,
    first,
    second,
    third

};
// Change value
enum change_value{
    low = 10,
    middle = 20,
    high = 50
};

/* Note that if you assign a value to one specific item,
the next items will update their numbers accordingly:*/
enum assignValue{
    a =10,
    b,// Now - 11
    c// Now - 12

};


int main(){

// An enum is a special type that represents a group of constants (unchangeable values).
    enum level myVar = second;
    cout << myVar <<"\n";

    //Change value
    enum change_value value = middle;
    cout << value << "\n";

    //Assign value & update
    enum assignValue assign1 = c;
    cout << assign1 << "\n";

    return 0;
}

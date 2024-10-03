#include<iostream>
using namespace std;

int main(){

    // Strings are used for storing text/characters.
    string name = "Error";
    cout << name << "\n";
    // String Concatenation
    //The + operator can be used between strings to add them together to make a new string. This is called concatenation:
    string firstName = "Sojib";
    string lastName = "Miah";
    string fullName =firstName+" "+lastName;

    cout << fullName << "\n";\
    // append() function
    string Append_funcion = firstName.append(lastName);
    cout << fullName << "\n";


    // Number & String

    string x="5", y="2";// will be an string
    string z = x+y; // z will be an string (52)
    cout << z << "\n";

    // String Length - length(), size()

    string txt = "mdsojibmiah";
    cout << "The length of the name string is = " << txt.length() << "\n";
    cout << "The length of the name string is = " << txt.size() << "\n";

    // Access String

    //Note: String indexes start with 0: [0] is the first character. [1] is the second character,
    string myString = "Error";
    cout << myString[0] << "\n"; // E
    cout << myString[1] << "\n"; // r
    cout << myString[2] << "\n"; // r
    cout << myString[3] << "\n"; // o
    cout << myString[4] << "\n"; // r

    // Last Character access

    cout << myString[myString.length()-1] << "\n";//r

    //Change String Characters
    myString[3] = 'S';
    cout << myString << "\n";

    // at() Function can be used to access characters in a string
    cout << myString.at(0);


    return 0;
}

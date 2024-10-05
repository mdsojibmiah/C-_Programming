#include<iostream>
#include<string>
using namespace std;


//// Create a function
void myFunction(){
    cout << "Learn C++ Programing!"<< "\n";
}
int sum(){
    int a,b,sum;
    cin>> a;
    cin>> b;
    sum = a+b;
    cout << "Result = " << sum << "\n";
}

// Parameters and Arguments

void abc(string fName){
    cout << fName << " Error\n";
}



// Default Parameter Value
void ab(string country = "Bangladesh"){
    cout << country << "\n";
}

int main(){

    // Call the function
    abc("Sojib");
    abc("Sojib");
    abc("Sojib");
    ab("India");
    ab("Sweden");
    ab();
    ab("USA");
    myFunction();
    myFunction();
    myFunction();
    myFunction();
    sum();




    return 0;
}

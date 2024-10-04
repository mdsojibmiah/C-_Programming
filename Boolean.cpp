#include<iostream>
using namespace std;

int main(){

    /*For this, C++ has a bool data type, which can
    take the values true (1) or false (0).*/

    bool iscodingfun = true;
    bool error = false;
    cout << iscodingfun << "\n";
    cout << error << "\n";


    //Boolean Expression
    cout << (10>5) << "\n"; // True
    cout << (10<5) << "\n"; // false

    // Real life example

    int myaAge = 25, voteAge = 18;
    if(myaAge>=voteAge){
        cout << "Old enough to vote" << "\n";
    }else{
        cout << "Not old enough to vote" << "\n";
    }


    return 0;
}

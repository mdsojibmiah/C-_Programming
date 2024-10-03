#include<iostream>
using namespace std;

int main(){

    /*
        && 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10
        || 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4
        !	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)
    */
    int x = 5, y = 10;
    cout << (x<y && y/x )<< "\n";// True
    cout << (x<y || y<x )<< "\n";// True
    cout << !(x<y && y/x )<< "\n";// false
    return 0;

}

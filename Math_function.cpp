#include<iostream>
#include<cmath>
using namespace std;


int main(){

    //The max(x,y) function can be used to find the highest value of x and y:
    cout << max(5,10) << "\n";
    //And the min(x,y) function can be used to find the lowest value of x and y:
    cout << min(5,10)<< "\n";

    /*
        Other functions, such as sqrt
        (square root), round (rounds a number) and log (natural logarithm),
        can be found in the <cmath> header file

    */
    cout << "Square root of 64 is: " << sqrt(64) << "\n";
    cout << "Round 2.6 to the nearest integer: " << round(2.6) << "\n";
    cout << "The natural logarithm of 2 is: " <<log(2) << "\n";



    return 0;
}

#include<iostream>
using namespace std;

int main(){

    //There is also a "for-each loop" (also known as ranged-based for loop),
    /*for (type variableName : arrayName) {
           code block to be executed
        }*/


  // Create an array of integers
  int myNumbers[5] = {10, 20, 30, 40, 50};

  // Loop through integers
  for (int i : myNumbers) {
    cout << i << "\n";
  }


    int number =2, i;
    for(i=1; i<=10; i++){
        cout << number << " x " << i << " = " << number*i << "\n";
    }

    return 0;
}

#include<iostream>
using namespace std;

int main(){

    //The break statement can also be used to jump out of a loop.
    for(int i=1;i<=10;i++){
        if(i==6){
            break;
        }
        cout << i << "\n";// print - 1-5
    }
    cout << "Continue ---- " << "\n";
    //The continue statement breaks one iteration (in the loop)
    for(int j=1; j<=10; j++){
        if(j==5){
            continue;
        }
        cout << j << "\n"; // 5 number skip
    }

    // while loop using
    cout << "While loop using ------" << "\n";
    int i =0;
    while(i<=5){
        cout << i << "\n";
        i++;
        if(i==3){
            break;
        }
    }
    cout << "while loop - continue " << "\n";
    int k =0;
    while(k<=5){
        if(k==3){
            k++;
            continue;
        }
        cout << k << "\n";
        k++;
    }

    return 0;
}

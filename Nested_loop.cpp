#include<iostream>
using namespace std;

int main(){

    // Outer Loop
    for(int i=1; i<=3; i++){
        cout << "Outer Loop = " << i << "\n";

        // Inner Loop
        for(int j=1; j<=3; j++){
            cout << "   Inner Loop = " << j << "\n";

        }
    }

    return 0;
}

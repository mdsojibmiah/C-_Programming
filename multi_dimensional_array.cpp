#include<iostream>
using namespace std;

int main(){

    int a[2][3]={ {1,2,3},{4,5,6} };

    //Access 2D element
    cout << a[0][1] << "\n";//2
    cout << a[1][2] << "\n"; //6

    // Using loop
    for(int i=0;i<2;i++){
        for(int j=0; j<3;j++){
            cout << a[i][j] << "\n";
        }
    }


    return 0;
}

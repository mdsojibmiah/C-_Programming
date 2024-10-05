#include<iostream>
using namespace std;


void swapNum(int &x, int &y){
    int z = x;
    x=y;
    y=z;


}

int main(){

    int num = 20, num2 = 24;

    cout << "Before swap : " << "\n";
    cout << num << num2 << "\n";

    swapNum(num,num2);
    cout << "After swap :"<< "\n";
    cout << num << num2 << "\n";
    return 0;
}

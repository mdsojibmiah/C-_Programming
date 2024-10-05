#include<iostream>
using namespace std;

int sum(int x){
    return 5*x;
}
int addValue(int a, int b){
    return a+b;
}

int main(){
    cout << sum(5) << "\n";
    cout << addValue(5,10);
    return  0;
}

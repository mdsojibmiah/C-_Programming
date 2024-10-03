#include<iostream>
using namespace std;

int main(){

    int x = 3, y = 2;

    x += y;
    cout << x << "\n";//5
    x -= y;
    cout << x << "\n";//3
    x *= y;
    cout << x << "\n";//6
    x /= y;
    cout << x << "\n";//3
    x %= y;
    cout << x << "\n";//1
    x -= y;
    cout << x << "\n";//-1


    return 0;
}

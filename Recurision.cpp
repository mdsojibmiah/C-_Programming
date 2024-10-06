#include<iostream>
using namespace std;

int sum(int n){
    if(n>0){
        return n +sum(n-1);
    }
    else{
        return 0;
    }

}


int main(){

    //Recursion is the technique of making a function call itself.
    int result ;
    result = sum(10);
    cout << "Sum(0-10) = " << result << "\n";

    return 0;
}

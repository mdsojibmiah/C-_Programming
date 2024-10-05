#include<iostream>
using namespace std;

int main(){

    //let's create a program that calculates the average of different ages

    int age[5] = {20,30,22,34,21};
    int sum=0;
    int avg;

    int length = sizeof(age) / sizeof(age[0]);
    cout << "Array Size = " << length << "\n";

    for(int ages : age){
        sum+=ages;
    }

    cout << "Sum of ages = " << sum << "\n";

    avg = sum/length;
    cout << "The Avg age is = " << avg << "\n";

    // LowestAge

    int lowestAge = age[0];

    for(int lowe : age){
        if(lowestAge>lowe){
            lowestAge=lowe;
        }
    }
    // Print the lowest age
    cout << "The lowest age is: " << lowestAge << "\n";

    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

int main(){

    //Arrays are used to store multiple values in a single variable
    string Array[4] = {"bangla", "english", "math" , "science" };
    cout << Array[0] << "\n";// bangla
    Array[0] = "islam"; // [0] value change - bangla - islam
    cout << Array[0] << "\n"; // islam

    //Loop Through an Array
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for(int i=0; i<5; i++){
        cout << i << " = " << cars[i] << "\n";
    }

    //The foreach Loop
    int num[4]={10,20,30,40};
    for(int i : num){
        cout << i << "\n";
    }

    // Omit Array Size

    string car[5];
    car[0] = "Volvo";
    car[1] = "BMW";
    car[2] = "Ford";
    car[3] = "Mazda";
    car[4] = "Tesla";
    cout << car[3] << "\n";

    // Fixed Size (Arrays) vs. Dynamic Size (Vectors)

    // Fixed size array------------
    string fixed_array[5] ={ "Error", "C++", "C#", "Html","Javascrip" };
    cout << fixed_array[0] << "\n";
    for(string printArray : fixed_array){
        cout << printArray << "\n" ;
    }

    // Vectors - Dynamic Size

    vector<int> one = {1,2,3,4,5,6,7,8,9,10};
    one.push_back(21);
    for(int num : one){
        cout << num << "\n";
    }

    //Get the Size of an Array
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << getArrayLength;




    return 0;
}

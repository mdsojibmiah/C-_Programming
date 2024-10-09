#include<iostream>
#include<string>
using namespace std;

class Studen{
public:
    string name;
    int id;
    double cgpa;
};

int main(){

    Studen sojib,aditta,mehedi,rakib;

    cout<<"Enter your name : ";
    getline(cin,sojib.name);
    cout<< "Enter you id = ";
    cin >> sojib.id;
    cout << "Enter your cgpa = ";
    cin >> sojib.cgpa;


    cout<< sojib.name<<endl;
    cout<< sojib.id<< endl;
    cout<< sojib.cgpa<<endl;


    return 0;
}

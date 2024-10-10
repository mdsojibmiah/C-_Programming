#include<iostream>
using namespace std;

//Inside class definition
class inside{
public:
    void method(){
        cout<<"Method/function defined inside the class\n";
    }
};

//Outside Class Definition

class outside{
public:
    void meName();

};
void outside::meName(){
    cout<<"Method/function definition outside the class\n";

}


//Parameters

class Car{
public:
    int my_car(int speed);

};
int Car::my_car(int speed){
    cout<<"Speed : " << speed;
    return 0;
}


int main(){

    inside myObj;
    myObj.method();
    outside myObj1;
    myObj1.meName();

    Car car1;
    car1.my_car(200);
    return 0;
}
